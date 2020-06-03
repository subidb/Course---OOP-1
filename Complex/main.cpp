#include <iostream>
using namespace std;
#include "Complex.h"

int main()
{
    double r1,r2,i1,i2;

    cout << "Enter Real and Imaginary parts of your 1st Complex Number(c1) in order" << endl;
    cin >> r1;
    cin >> i1;

    cout << "Enter Real and Imaginary parts of your 2nd Complex Number(c2) in order" << endl;
    cin >> r2;
    cin >> i2;

    Complex c1,c2,c3,conj,csum,cprod;

    c1.setReal(r1);
    c1.setImag(i1);

    c3 = Complex(3,-5);

    conj = c3.conjugate();
    csum = c1.sum(c3);
    cprod = c1*c3;

    cout << "\nc3 = "; c3.print();
    cout << "Conjugate of c3 = "; conj.print();
    cout << "c1+c3 = "; csum.print();
    cout << "Product of the numbers(c1*c2) = " ; cprod.print();

}


