#include "l182182_Rectangle.h"



float Rectangle::area() const
{
	return height * width;
}

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(float mHeight, float mWidth, string mColor) :height(mHeight), width(mWidth), Shape(mColor)
{

}


Rectangle::~Rectangle()
{
	cout << "~Rectangle() called" << endl;
}
