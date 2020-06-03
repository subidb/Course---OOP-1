
#include<iostream>
#include<cstring>
#include "Shapes.h"
using namespace std;

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon rr("TRIANGLE", 1, 1, 3);
  Rectangle r("Rectangle", 1, 1, 4, 5);                    //creating different instances of different classes
  Square s("Square", 3, 2, 2);
  s.setSide(5);
  double c1, c2, s1, s2, r1, r2;                              //declaration to store value
  c1 = c.area();
  //c2 = c.perimeter();
  s1 = s.area();
  s2 = s.perimeter();
  r1 = r.area();
  r2 = r.perimeter();

  Rhombus rh("Rhombus",2,3,5,8);

  double r5 = rh.area();


  cout << "The area of Circle: "<< c1 << " . The perimeter of Circle: " << c.perimeter() << endl;
  cout << "The area of Rectangle: "<< r1 << " .The perimeter of Rectangle: " << r2 << endl;
  cout << "The area of Square: "<< s1 << " . The perimeter of Square: " << s2 << endl;

  cout << "Area of Rhombus = " << r5;


}
