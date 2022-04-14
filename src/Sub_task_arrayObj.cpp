#include<iostream>
#include<string.h>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"

using namespace std;

int main()
{
	Shape Shp;
	cout << "Enter type of shape:  (name) \n 1.Circle \n 2.Rectangle \n 3.Triangle \n";
	cin >> Shp.type;
	if (Shp.type == "Circle") {
		Circle c1[2];
		cout << "\nEnter Radius :";
		cin >> c1[0].radius;
		cout << "\nEnter Color :";
		cin >> c1[0].color;
		cout << "\nThe area is :" << c1[0].getArea() << "\n";
		cout << "\nThe perimeter is :" << c1[0].getPerimeter() << "\n";
		cout << "\nThe color is :" << c1[0].getColor() << "\n";
	}
	else if (Shp.type == "Rectangle") {
		Rectangle r1[2];
		cout << "\nEnter length :";
		cin >> r1[1].l;
		cout << "\nEnter width :";
		cin >> r1[1].w;
		cout << "\nEnter Color :";
		cin >> r1[1].color;
		cout << "\nThe area is :" << r1[1].getArea() << "\n";
		cout << "\nThe perimeter is :" << r1[1].getPerimeter() << "\n";
		cout << "\nThe color is :" << r1[1].getColor() << "\n";
	}
	else if (Shp.type == "Triangle") {
		Triangle t1[2];
		cout << "\nEnter Base :";
		cin >> t1[2].b;
		cout << "\nEnter Height :";
		cin >> t1[2].h;
		cout << "\nEnter Hypotenuse :";
		cin >> t1[2].hy;
		cout << "\nEnter Color :";
		cin >> t1[2].color;
		cout << "\nThe area is :" << t1[2].getArea() << "\n";
		cout << "\nThe perimeter is :" << t1[2].getPerimeter() << "\n";
		cout << "\nThe color is :" << t1[2].getColor() << "\n";
	}
}

