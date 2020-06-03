/*
CH08-320142
a5 p5.cpp
Subid Basaula
s.basaula@jacobs-university.de
*/
#include "fraction.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    Fraction a1, a2;
    cout << "Enter the numerator and denominator of your 1st fractional number in order" << endl;
    cin >> a1;
    cout << "Enter the numerator and denominator of your 2nd fractional number in order" << endl;
    cin >> a2;
    //int g = gcd(a1,a2);
    cout << endl;
    cout << "Product of your numbers = " << a1*a2;
    cout << "Result after dividing number 1 by number 2 = " << a1/a2 <<endl;
    //divide both num and den by the gcd!
    cout << "Do simplify!\n" << endl;

    return 0;
}
