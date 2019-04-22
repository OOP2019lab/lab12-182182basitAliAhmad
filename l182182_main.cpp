#include "l182182_Shape.h"
#include "l182182_Circle.h"
#include "l182182_Rectangle.h"
#include "l182182_Triangle.h"
#include <conio.h>

float sumArea(Shape* s1, Shape* s2)
{
	return s1->area() + s2->area();
}

int main()
{
	string clr;

	// Exercise 1
	Triangle t1(1.0, 9.0, "Red");
	Circle c1(2, "Blue");
	Rectangle r1(6, 2, "Orange");
	cout << t1.area() << endl;
	cout << t1.color << endl;
	cout << c1.area() << endl;
	cout << r1.area() << endl;

	Shape* sptr = &t1;
	Shape &sref = r1;
	cout << sptr->area() << endl;
	cout << sptr->color << endl;
	cout << sref.color << endl;
	cout << sref.area() << endl;
	cout << "-------------------------------------" << endl;

	// Exercise 3a
	Shape s1("Purple");

	cout << sumArea(&t1, &c1) << endl;
	cout << sumArea(&s1, &r1) << endl;
	cout << sumArea(&s1, &t1) << endl;
	cout << "-------------------------------------" << endl;
	 //Exercise 3b

	int count = 5;
	Shape** shapesArray = new Shape*[count] {nullptr};

	for (int i = 0; i < count;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		switch (_getch())
		{

		case '1':
			//get base and height from user as input
			float base, height;
			cout << "Enter base and height ---> ";
			cin >> base >> height;
			cin.ignore();
			//get color from user as input
			cout << "Enter Color ----> ";

			getline(cin, clr);
			// create new triangle object and add to shapesArray[i]
			shapesArray[i] = new Triangle(base, height, clr);
			i++;
			break;
		case '2':
			//get length and width from user as input
			float width, length;
			cout << "Enter height and width ---> ";
			cin >> length >> width;
			//get color from user as input
			cin.ignore();
			cout << "Enter Color ----> ";
			getline(cin, clr);
			// create new rectangle object and add to shapesArray[i]
			shapesArray[i] = new Rectangle(length, width, clr);
			i++;
			break;

		case '3':

			//get radius from user as input
			float rad;
			cout << "Enter radius ----> ";
			cin >> rad;
			//get color from user as input
			cin.ignore();
			cout << "Enter Color ----> ";
			getline(cin, clr);
			// create new circle object and add to shapesArray[i]
			shapesArray[i] = new Circle(rad, clr);
			i++;
			break;

		default:
			cout << "Invalid input. Enter again." << endl << endl;
			break;
		}

	}
	
		//print area of all the shapes in shapeArray
		for (int i = 0; i < count; i++)
		{
			if (shapesArray[i] != nullptr)
				cout << shapesArray[i]->area() << endl;
		}
		//delete all object you have create using new.    
		for (int i = 0; i < count; i++)
		{
			if (shapesArray[i] != nullptr)
				delete shapesArray[i];
		}
		delete[]shapesArray;
	cout << "-------------------------------------" << endl;
	Shape *s2 = new Triangle(1.0, 9.0, "Red");// constructor of triangle invoked
	delete s2; //identify which destructor in invoked
	cout << "-------------------------------------" << endl;

    return 0;
}

