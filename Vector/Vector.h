#ifndef VECTOR_H
#define VECTOR_H
#include "Vector.h"
#include <iostream>

using namespace std;


class Vector
{
    private:
        int num;
        double *components;

    public:
        Vector();
        ~Vector();
        Vector(int,const double *);
        Vector(const Vector&);
        void setSize(int);
        int getSize();
        void setComp(double *);
        double getComp();
        Vector add(const Vector) const;
        Vector operator-(const Vector&) const;
        double Norm() const;
        double dot(const Vector) const;
        void print() const;



};

#endif // VECTOR_H
