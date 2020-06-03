
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);
		void setname(const std::string&);		// copy constructor
		void printName() const;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
	private:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void setx(double);
		void sety(double);
		double getx() const;
		double gety() const;
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon(const std::string&, double, double);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdgesNumber(int);
		int getEdgesNumber() const;


};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		void setRadius(double);
		double getRadius();
		double area();
		double perimeter();
};

class Rectangle: public RegularPolygon
{
    private:
        double length;
        double width;
    public:
        Rectangle();
        ~Rectangle();
        Rectangle(const string&, double , double , double , double);
        Rectangle(const string&, double, double);
        Rectangle(const Rectangle&);
        void setLength(double);
        void setWidth(double);
        double getLength();
        double getWidth();
        double area();
        double perimeter();
        void print();
};

class Square: public Rectangle
{
    private:
        double side;
    public:
        Square();
        ~Square();
        Square(const Square& );
        Square(const string&, double, double, double);
        void setSide(double);
        double getSide()const;
        double area() const;
        double perimeter() const;
        void print();
};

class Rhombus: public Rectangle
{
    private:
        int side;
        int diagonal;

    public:
        Rhombus();
        Rhombus(const string&, double, double, int, int);
        double area();
        //void print();


};

#endif
