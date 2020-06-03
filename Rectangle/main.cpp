#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
    Rectangle * a;
    int n,w,l;
    cout << "Number of Rectangles: " << endl;
    cin >> n;

   a = new Rectangle[2*n];

   for(int i=0; i<n; i++)
   {
       cout << "Enter length:";
       cin >> l;
       cout << "Enter width:";
       cin >> w;
       a[i].setLength(l);
       a[i].setWidth(w);

    }

    cout << "\n";

    for(int i=n; i<2*n; i++)
    {
        a[i] = Rectangle(a[i-n]);
    }

    cout << "\n";

    for(int i=0; i<2*n; i++)
    {
            a[i].print();
    }

    delete []a;
    return 0;
}
