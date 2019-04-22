#pragma once
#include "l182182_Shape.h"
class Circle :	public Shape
{
private:
	float radius;

public:
	Circle();
	Circle(float, string);
	~Circle();

	float area() const;
};

