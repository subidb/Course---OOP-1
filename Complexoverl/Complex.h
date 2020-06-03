#ifndef COMPLEX_H
#define COMPLEX_H


#include <iostream>

class Complex
{
    private:
        double real;
        double imag;


    public:
        Complex();
        ~Complex();
        Complex(double, double);
        Complex(const Complex&);

        void setReal(double);
        void setImag(double);

        double getReal();
        double getImag();

        Complex operator+(const Complex&);
        void operator=(const Complex&);
        bool operator>(const Complex&);

        Complex operator-(const Complex&);

        friend std::istream& operator>>(std::istream&, Complex&);
        friend std::ostream& operator<<(std::ostream&, const Complex&);

        friend Complex operator+(double, const Complex&);

        //friend Complex operator-(const Complex&, const Complex&);

        void print();

};

#endif // COMPLEX_H
