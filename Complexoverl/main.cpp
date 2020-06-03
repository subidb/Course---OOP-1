#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	Complex a0,a1(5, 7),a2;

	cout << "Complex 1 = " << a1 << endl;
	cout << " " << endl;
	cin >> a2;


	Complex a3(a2);

	cout << "Complex 2 = " << a3 << endl;

	Complex a4 = a1+a2;
	cout << "sum = " << a4 << endl << endl;

	Complex a5 = 3 + a1;
	cout << a5 << endl;
	cout << "Diff = " << a1-a3 << endl;

	if(a1>a2)
        cout << "\n\na1>a2" << endl;
    else
        cout << "\n\na2>a1" << endl;

}
