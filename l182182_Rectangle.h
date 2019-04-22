#pragma once
#include "l182182_Shape.h"

class Rectangle :	public Shape
{
private:
	float height;
	float width;

public:
	Rectangle();
	Rectangle(float, float, string);
	~Rectangle();

	float area() const;
};

