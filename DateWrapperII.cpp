#include <iostream>
#include "DateBasicDef.h"
#include "DateWrapperII.h"

DateWrapperII::DateWrapperII( const CMonth & m, const Day& d, const Year& y ) :
m_Month( m ),
m_Day( d ),
m_Year( y )
{
    std::cout << "DateWrapperII constructor" << std::endl;
}

DateWrapperII::~DateWrapperII()
{
    std::cout << "DateWrapperII destructor" << std::endl;
}