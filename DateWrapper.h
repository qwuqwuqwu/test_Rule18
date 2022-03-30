#ifndef DATEWRAPPER_H_
#define DATEWRAPPER_H_

class DateWrapper {
public:
    DateWrapper( const Month & m, const Day& d, const Year& y );
    ~DateWrapper();

private:
    Month m_Month;
    Day m_Day;
    Year m_Year;
};

#endif