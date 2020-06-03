#include <iostream>
//#include <algorithm>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction a1,a2;

    cout << "Enter the numerator and denominator of your 1st fractional number in order" << endl;
    cin >> a1;
    cout << "Enter the numerator and denominator of your 2nd fractional number in order" << endl;
    cin >> a2;

	//Fraction c(5);

//	Fraction a,b;
    //Fraction e = Fraction(c);
    if(a1>a2)
    {
        cout << "1st Fraction > 2nd Fraction" << endl;
    }
    else if(a1<a2)
    {
        cout << "2nd Fraction > 1st Fraction" << endl;
    }
    else
    cout << "1st fraction = 2nd fraction" << endl;

	cout << "\n1st fraction = " << a1;
	cout << "\n2nd fraction = " << a2;
//	cout << "\n3rd fraction = " << c;

//	cout << "\n3rd copy = " << e;

	cout << "\nproduct of 1st and 2nd = " << (a1*a2) << endl;

	cout << "1st divided by 2nd = " << (a1/a2) << endl;

    cout << "Sum = " << a1+a2 << endl;

  //  cout << "Difference = " << a1-a2 << endl;

}
