#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
    double a[] = {1,2,3,4};
    double b[] = {4,3,2,1};

    int n;
    Vector vin;
    cout << "enter size and then components of Vector" << endl;
    cin >> n;

    vin.setSize(n);

    double * arr = new double[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vin.setComp(arr);
    vin.print();
    cout << "\n" << endl;

    Vector v1(4,a);
    Vector v2=v1;
    Vector v3(4,b);

    cout << "Vector 1= "; v1.print();
    cout << "\nVector 2= "; v2.print();
    cout << "\nVector 3= "; v3.print();

    cout << "\n\nv1 + v2 = ";
    v1.add(v2).print();

    cout << "\nv1 - v3 = "; (v1-v3).print();


}
