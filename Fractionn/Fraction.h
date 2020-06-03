#include <iostream>
#ifndef FRACTION_H_
#define FRACTION_H_


class Fraction
{
private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    //int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);    // constructor taking values for fractions and
                                // integers. Denominator by default is 1

    friend std::ostream& operator <<(std::ostream&, const Fraction&);  //overloading the operator "<<"
    friend std::istream& operator >>(std::istream&, Fraction&);           //overloading the operator ">>"
    Fraction operator*(Fraction);                                         //overloading the operator "*"
    Fraction operator/(Fraction);                                   //overloading the operator "/"
    int gcd(int a, int b);

};


#endif
