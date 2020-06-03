#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
    cout << "default constructor\n";
}

Rectangle::Rectangle(int a, int b)
{
    length = a;
    width = b;
    cout << "para";
}

Rectangle::Rectangle(const Rectangle &c)
{
    length = c.length;
    width = c.width;
    cout << "copyconstructor\n" ;
}

void Rectangle::setLength(int a)
{
    length = a;
}

void Rectangle::setWidth(int a)
{
    width = a;
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getWidth()
{
    return width;
}

void Rectangle::print()
{
    cout << "Area = " << width * length << endl;
}

Rectangle::~Rectangle()
{
    cout << "destructor\n";
}
