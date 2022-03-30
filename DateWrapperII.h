#ifndef DATEWRAPPERII_H_
#define DATEWRAPPERII_H_

class CMonth {
public:
    static CMonth Jan() { return CMonth( 1 ); }
    static CMonth Feb() { return CMonth( 2 ); }
    static CMonth Mar() { return CMonth( 3 ); }
    static CMonth Apr() { return CMonth( 4 ); }
    static CMonth May() { return CMonth( 5 ); }
    static CMonth Jun() { return CMonth( 6 ); }
    static CMonth Jul() { return CMonth( 7 ); }
    static CMonth Aug() { return CMonth( 8 ); }
    static CMonth Sep() { return CMonth( 9 ); }
    static CMonth Oct() { return CMonth( 10 ); }
    static CMonth Nov() { return CMonth( 11 ); }
    static CMonth Dec() { return CMonth( 12 ); }

private:
    explicit CMonth( int m ) : m_nMonth( m ){}
    int m_nMonth;
};

class DateWrapperII {
public:
    DateWrapperII( const CMonth & m, const Day& d, const Year& y );
    ~DateWrapperII();

private:
    CMonth m_Month;
    Day m_Day;
    Year m_Year;
};

#endif