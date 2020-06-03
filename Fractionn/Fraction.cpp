
#include "fraction.h"
#include <iostream>
#include <cmath>

using namespace std;
Fraction::Fraction()
{
    num = 1; //setting default values of numerator and denominator
    den = 1;
}


Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    if( a < b ) //calculating gcd
          std::swap( a, b );

       while( b > 0 )
       {
          int f = a % b;
          a = b;
          b = f;
       }
       int gcd = a;
       return gcd;
}

int Fraction::lcm(int a, int b)
{
    return (a * b) / gcd(a, b);

}

std::ostream & operator <<(std::ostream & output, const Fraction & src) //making the operator able to print
{
    output << src.num << "x";
    output << '/';
    output << src.den;
    output << std::endl;
    return output;
}
std::istream & operator >>(std::istream& input, Fraction& prnt) //making the operator able to take inputs
{
    input >> prnt.num >> prnt.den;
    return input;
}

Fraction Fraction:: operator*(Fraction obj2)
{
    Fraction product;
    product.num = obj2.num * num; //product of numerators
    product.den = obj2.den * den; //product of denominators
    return product;

}
Fraction Fraction:: operator/(Fraction obj2)
{
    Fraction div;
    div.num = obj2.den* num; //after division of two fractional numbers, the product of the
    //numerator of 1st number and denominator of 2nd number is on top;
    div.den = obj2.num* den;
    return div;
}
