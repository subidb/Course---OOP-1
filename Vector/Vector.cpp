#include "Vector.h"
#include <iostream>

using namespace std;



Vector::Vector()
{
    num = 4;
    components = new double[num];
    for(int i=0; i<num; i++)
    {
        components[i] = 0;
    }

}

Vector::Vector(int n, const double* x): num(n)
{
    components = new double[n];
    for(int i=0; i<num; i++)
    {
        components[i] = x[i];
    }
}

Vector::Vector(const Vector& c)
{
    num = c.num;
    components = new double[num];

    for(int i = 0; i< num; i++)
    {
        this->components[i] = c.components[i];
    }
}

void Vector::setSize(int n)
{
    num = n;
}

void Vector::setComp(double * x)
{
    components = new double[4];
    for(int i = 0; i< num; i++)
    {
        components[i] = x[i];
    }
}

int Vector::getSize()
{
    return num;
}

double Vector::getComp()
{
    return *components;
}

Vector Vector::add(const Vector x) const
{
   Vector sum;
   sum.num = x.num;
   for(int i = 0; i < num; i++)
   {
       sum.components[i] =  components[i] + x.components[i] ;
   }
   return sum;
}

Vector Vector::operator-(const Vector& x) const
{
    Vector diff;
    diff.num = x.num;
    for(int i = 0; i<num; i++)
    {
        diff.components[i] = this->components[i] - x.components[i];
    }
    return diff;

}


void Vector::print() const
{
    cout << "{";
    for(int i = 0; i < num; i++)
    {
        cout << components[i];
        if(i<num-1)
        cout << ",";
    }
    cout << "}";
}

Vector::~Vector()
{
    delete []components;
}
