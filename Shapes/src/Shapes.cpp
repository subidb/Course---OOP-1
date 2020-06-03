

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}
Shape::Shape(){
	name = "Default";                                             //default constuctor of shape
}
Shape::Shape(const Shape& src){                               //copy constructor
	name = src.name;
}
void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(): Shape(){
	x = 0;
	y = 0;
}
CenteredShape::CenteredShape(const CenteredShape& src): Shape(){                             //copy constructor
	x = src.x;
	y = src.y;
}
void CenteredShape::setx(const double m){
	x = m++;
}
void CenteredShape::sety(double n){
	y = n;
}
double CenteredShape::getx() const{
	return x;
}
double CenteredShape::gety() const{
	return y;
}
RegularPolygon::RegularPolygon():CenteredShape(){
	EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const RegularPolygon& mm): CenteredShape(){
	EdgesNumber = mm.EdgesNumber;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = 4;
}
void RegularPolygon::setEdgesNumber(int k){
	EdgesNumber = k;
}
int RegularPolygon::getEdgesNumber() const{
	return EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}
Circle::Circle():CenteredShape(){
	Radius = 0;
}
Circle::Circle(const Circle& src):CenteredShape(){
	Radius = src.Radius;
}
void Circle:: setRadius(double rr){
	Radius = rr;
}
double Circle::getRadius(){
	return Radius;
}
double Circle::area(){
	return (22/7* Radius*Radius);
}
double Circle::perimeter(){
	return 2*(22/7)*Radius;
}

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(const string& n, double a, double b, double l, double w): RegularPolygon(n, a, b), length(l)
{
    //length = l;
    width = w;
}

void Rectangle::setLength(double l)
{
    length = l;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

double Rectangle::area()
{
    return length*width;
}

double Rectangle::perimeter()
{
    return 2*(length+width);
}

Rectangle::Rectangle(const Rectangle& a)
{
    length = a.length;
    width = a.width;
}

Rectangle::Rectangle(const string&n, double a, double b): RegularPolygon(n,a,b)
{

}

Rectangle::~Rectangle()
{

}

Square::Square(): Rectangle()
{

}

Square::Square(const Square & c): Rectangle()
{
    side = c.side;
}

Square::Square(const string &n, double a, double b, double s): Rectangle(n,a,b)
{
    side = s;
}

void Square::setSide(double s)
{
    side = s;
}

double Square::getSide() const
{
    return side;
}

double Square::area() const
{
    return side*side;

}

double Square::perimeter() const
{
    return side*4;
}

Square::~Square()
{

}

Rhombus::Rhombus(): side(0), diagonal(0)
{

}

Rhombus::Rhombus(const string& a, double b, double c, int s, int d): Rectangle(a,b,c)
{
    side = s;
    diagonal = d;
}

double Rhombus::area()
{
    return side*diagonal;
}


