#include "l182182_Circle.h"



Circle::Circle()
{
}

Circle::Circle(float mRadius, string mColor) : radius(mRadius), Shape(mColor)
{

}


Circle::~Circle()
{
	cout << "~Circle() called" << endl;
}

float Circle::area() const
{
	return 3.14159265 * radius * radius;
}
