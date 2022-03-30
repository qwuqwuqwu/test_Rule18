#include <iostream>
#include "Date.h"
#include "DateBasicDef.h"
#include "DateWrapper.h"
#include "DateWrapperII.h"
#include "Rational.h"
#include "Investment.h"

void ExampleI( void )
{
    Date d_InvalidMonth( 30, 3, 1995 );
    Date d_InvalidDay( 2, 30, 1995 );
}

void ExampleII( void )
{
    // DateWrapper d_WrongType( 30, 3, 1995 ); // no matching constructor for initialization of DateWrapper <----- Try uncomment this
    // DateWrapper d_WrongType2( Day( 30 ), Month( 30 ), Year( 1995 ) ); // <----- Try uncomment this
    DateWrapper d_OK( Month( 3 ), Day( 30 ), Year( 1995 ) );

    // of course you can use class instead of struct to provide better arguments checking
}

void ExampleIII( void )
{
    DateWrapperII d( CMonth::Jan(), Day( 30 ), Year( 1995 ) );
}

void ExampleIV( void )
{
    Rational a( 1, 2 );
    Rational b( 2, 3 );
    Rational c( 2, 6 );

    if( a * b == c ) {
        std::cout << " a * b equals to c " << std::endl;
    }
    else {
        std::cout << " a * b not equals to c " << std::endl;
    }

    // <------------------------------------------------------Try uncomment this block
    /*
    if( a * b = c ) { // = is a typo
        std::cout << " a * b equals to c " << std::endl;
    }
    else {
        std::cout << " a * b not equals to c " << std::endl;
    }
    */
}

// function for example V
void ReleaseInvestmentDirectly( Investment *pInv )
{
    std::cout << "ReleaseInvestmentDirectly" << std::endl;
    std::cout << "Address of pInv = " << pInv << std::endl;
    if( pInv != NULL ) {
        delete pInv;
        pInv = NULL;
    }
}

void ReleaseInvestmentDirectlyII( Investment *pInv )
{
    std::cout << "ReleaseInvestmentDirectlyII" << std::endl;
    std::cout << "Address of pInv = " << pInv << std::endl;
    if( pInv != NULL ) {
        delete pInv;
        pInv = NULL;
    }
}

std::shared_ptr< Investment > createInvestment( const int& nDaysHeld, bool *pbSuccess )
// factory function
{
    std::cout << "createInvestment" << std::endl;

    // method1
    std::shared_ptr< Investment > retVal( static_cast< Investment* >( 0 ), ReleaseInvestmentDirectly );
    if( nDaysHeld > 0 ) {
        if( nDaysHeld == 2 ) {
            retVal = std::shared_ptr< Investment >( new Investment( nDaysHeld ), ReleaseInvestmentDirectlyII );
        }
        else {
            retVal = std::shared_ptr< Investment >( new Investment( nDaysHeld ), ReleaseInvestmentDirectly );
        }
        *pbSuccess = true;
    }
    else {
        *pbSuccess = false;
    }

    return retVal;
}

void PrintDaysHeld( std::shared_ptr< Investment > Inv )
{
    std::cout << "Printing result: Investment " << Inv.get() << " DaysHeld = " << Inv->GetDaysHeld() << std::endl;;
}

void ExampleV( const int& nDaysHeld ) {
    std::cout << std::endl;
    std::cout << "ExampleV start nDaysHeld = " << nDaysHeld << std::endl;
    bool bSuccess = false;
    std::shared_ptr< Investment > SharedInv = createInvestment( nDaysHeld, &bSuccess );

    if( bSuccess ) {
        PrintDaysHeld( SharedInv );
    }
    else {
        std::cout << "Create unsuccessfully" << std::endl;
    }
    std::cout << "ExampleV end" << std::endl;
}

int main( void ) {
    // ExampleI();
    // ExampleII();
    // ExampleIII();
    // ExampleIV();
    ExampleV( 10 );
    ExampleV( 2 );
    ExampleV( 0 );

    return 0;
}

