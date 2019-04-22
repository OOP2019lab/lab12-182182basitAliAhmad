#pragma once
#include "l182182_Shape.h"
class Triangle :	public Shape
{
private:
	float base;
	float height;

public:
	Triangle();
	Triangle(float, float, string);

	~Triangle();

	float area() const;

};

