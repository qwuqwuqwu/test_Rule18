#ifndef RATIONAL_H_
#define RATIONAL_H_

class Rational {
public:
    Rational( const int& nNum, const int& nDen );
    ~Rational();

    const Rational operator*( const Rational& rhs );
    bool operator==( const Rational& rhs ) const;

private:
    int m_nNum;
    int m_nDen;
};

#endif