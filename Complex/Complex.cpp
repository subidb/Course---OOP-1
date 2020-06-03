#include <iostream>
using namespace std;
#include "Complex.h"

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

Complex::Complex(const Complex &c)
{
    real = c.real;
    imag = c.imag;
}

void Complex::setReal(double r)
{
    real = r;
}

void Complex::setImag(double i)
{
    imag = i;
}

Complex Complex::conjugate()
{
    Complex c;
    c.real = real;
    c.imag = -imag;
    return c;
}

Complex Complex::sum(Complex x)
{
    Complex s;
    s.real = real + x.real;
    s.imag = imag + x.imag;
    return s;
}

Complex Complex::operator*(Complex &x)
{
    Complex p;
    p.real = real*x.real - imag*x.imag;
    p.imag = imag*x.real + real*x.imag;
    return p;
}

void Complex::print()
{
    if(imag)
    cout << noshowpos << real << showpos << imag << "i" << endl;
    else
    cout << noshowpos << real << endl;
}

Complex::~Complex()
{

}
