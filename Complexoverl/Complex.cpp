#include <iostream>
#include "complex.h"


Complex::Complex() :real(0), imag(0)
{

}

Complex::~Complex()
{

}

Complex::Complex(const Complex& x)
{
    real = x.real;
    imag = x.imag;
}

Complex::Complex(double a, double b): real(a), imag(b)
{

}

Complex Complex::operator+(const Complex& x)
{
    Complex a;
    a.real = this->real + x.real;
    a.imag = this->imag + x.imag;
    return a;
}

void Complex::setReal(double a)
{
    real = a;
}

void Complex::setImag(double a)
{
    imag = a;
}

double Complex::getImag()
{
    return imag;
}

double Complex::getReal()
{
    return real;
}

bool Complex::operator>(const Complex& x)
{
    if(real+imag > x.real + x.imag)
        return true;
    else
        return false;
}

void Complex::operator=(const Complex& x)
{
    this->real = x.real;
    this->imag = x.imag;
}

Complex Complex::operator-(const Complex& x)
{
    Complex c(real - x.real, imag-x.imag);
    return c;
}

std::istream& operator>>(std::istream& ip, Complex& x)
{
    ip >> x.real >> x.imag;
    return ip;
}

Complex operator+(double a, const Complex& x)
{
    Complex c;
    c.real = x.real + a;
    c.imag = x.imag;
    return c;
}

/*Complex operator-(const Complex& a, const Complex&b)
{
    //Complex c(a.real-b.real, a.imag-b.imag);

    Complex d;
    d.real = a.real - b.real;
    d.imag = a.imag - b.imag;
    return d;
}*/

std::ostream& operator<<(std::ostream& op, const Complex& x)
{
    if(x.imag)
    {
        op << std::noshowpos;
        op << x.real;
        op << std::showpos;
        op << x.imag;
        op << "i";
    }
    else
    {
        op << x.real;
    }
    return op;
}
