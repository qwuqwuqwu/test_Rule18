#include <iostream>
#include "Date.h"

Date::Date( const int& month, const int& day, const int& year ) :
m_nMonth( month ),
m_nDay( day ),
m_nYear( year )
{
    std::cout << "Date constructor" << std::endl;
}

Date::~Date()
{
    std::cout << "Date destructor" << std::endl;
}