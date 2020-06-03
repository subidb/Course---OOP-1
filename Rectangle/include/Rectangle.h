#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Rectangle.h"
#include <iostream>

using namespace std;

class Rectangle
{
   private:
       int length;
       int width;

   public:
    Rectangle();
    ~Rectangle();
    Rectangle(int, int);
    Rectangle(const Rectangle&);

    void setLength(int l);
    void setWidth(int w);

    int getLength();
    int getWidth();
    void print();


};

#endif // RECTANGLE_H
