#ifndef DATE_H_
#define DATE_H_

class Date {
public:
    Date( const int& month, const int& day, const int& year );
    ~Date();

private:
    int m_nMonth;
    int m_nDay;
    int m_nYear;
};

#endif