#include "l182182_Shape.h"



Shape::Shape()
{
}

Shape::Shape(string mColor) : color(mColor)
{

}


Shape::~Shape()
{
	cout << "~Shape() called" << endl;
}

float Shape::area() const
{
	return 0.0f;
}
