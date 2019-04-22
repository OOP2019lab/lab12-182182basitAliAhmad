#pragma once
#include<iostream>
#include<string>
using namespace std;



class Shape
{
protected:
	string type;
public:
	string color;

	Shape();
	Shape(string);
	virtual ~Shape();

	virtual float area() const;
};

