#include "l182182_Triangle.h"

Triangle::Triangle()
{

}

Triangle::Triangle(float mBase, float mHeight, string mColor) : base(mBase), height(mHeight), Shape(mColor)
{

}

Triangle::~Triangle()
{
	cout << "~Triangle() called" << endl;
}

float Triangle::area() const
{
	return 0.5 * base * height;
}

