#include <iostream>
#include "Rational.h"

Rational::Rational( const int& nNum, const int& nDen ) :
m_nNum( nNum ),
m_nDen( nDen )
{
    std::cout << "Rational constructor" << std::endl;
}

Rational::~Rational()
{
    std::cout << "Rational destructor" << std::endl;
}

const Rational Rational::operator*( const Rational& rhs )
{
    this->m_nDen *= rhs.m_nDen;
    this->m_nNum *= rhs.m_nNum;
    return *this;
}

bool Rational::operator==( const Rational& rhs ) const
{
    if( this->m_nDen == rhs.m_nDen && this->m_nNum == rhs.m_nNum ) {
        return true;
    }
    return false;
}
