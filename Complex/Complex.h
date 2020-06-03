#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
#include "Complex.h"

class Complex
{
    private:
        double real;
        double imag;

    public:
        Complex();
        Complex(double, double);
        Complex(const Complex&);
        ~Complex();

        void setReal(double r);
        void setImag(double i);
        double getReal();
        double getImag();

        Complex conjugate();
        Complex sum(Complex);
        Complex operator*(Complex&);

        void print();

};

#endif // COMPLEX_H
