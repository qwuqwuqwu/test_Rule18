#include <iostream>
#include "DateBasicDef.h"
#include "DateWrapper.h"

DateWrapper::DateWrapper( const Month& m, const Day& d, const Year& y ) :
m_Month( m ),
m_Day( d ),
m_Year( y )
{
    std::cout << "DateWrapper constructor" << std::endl;
}

DateWrapper::~DateWrapper()
{
    std::cout << "DateWrapper destructor" << std::endl;
}