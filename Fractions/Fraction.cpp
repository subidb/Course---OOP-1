#include <iostream>
#include "fraction.h"
#include <cmath>

Fraction::Fraction()
{
	num = 1;
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
	int tmp_gcd = 1;

    // Implement GCD of two numbers;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            tmp_gcd = i;
        }
    }

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

Fraction Fraction::operator*(const Fraction& a)
{
    Fraction x;
    x.num = num * a.num;
    x.den = den * a.den;
    return x;
}

Fraction Fraction::operator/(const Fraction& a)
{
    Fraction x;
    x.num = num * a.den;
    x.den = den * a.num;
    return x;
}

std::istream& operator>>(std::istream& ip, Fraction& x)
{
    ip >> x.num >> x.den;
}

std::ostream& operator<<(std::ostream& op, const Fraction& x)
{
    op << x.num;
    op << "/";
    op << x.den;
    op << std::endl;
}

bool Fraction::operator>(const Fraction& x)
{
    if(num * x.den > den * x.num)
    {
        return true;
    }
    else
        return false;
}

bool Fraction::operator<(const Fraction&x)

{
    if(num*x.den < den*x.num)
    {
        return true;
    }
    else
        return false;
}

Fraction Fraction::operator+(const Fraction& x)
{
    Fraction sum;
    sum.num = num*lcm(den,x.den)/den + x.num*lcm(den,x.den)/x.den;
    sum.den = lcm(den,x.den);
    return sum;

}
