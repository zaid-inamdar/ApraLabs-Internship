#include<iostream>
#include<string.h>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
using namespace std;

int main()
{
	//int num;
	//cout << "Enter number of Shapes:";
	//cin >> num;
	//for (int i = 0; i < num; i++) {
		Shape Shp;
		cout << "Enter type of shape:  (name) \n 1.Circle \n 2.Rectangle \n 3.Triangle \n";
		cin >> Shp.type;
		if (Shp.type == "Circle") {

			Circle* circleptr = new Circle[2];
			for (int i = 0; i < 2; i++) {

				cout << "\nEnter Radius :";
				cin >> (circleptr[i]).radius;
				cout << "\nEnter Color :";
				cin >> (circleptr[i]).color;
				cout << "\nThe area is :" << (circleptr[i]).getArea() << "\n";
				cout << "\nThe perimeter is :" << (circleptr[i]).getPerimeter() << "\n";
				cout << "\nThe color is :" << (circleptr[i]).getColor() << "\n";
			}
		}
		else if (Shp.type == "Rectangle") {
			Rectangle* rectptr = new Rectangle[2];
			for (int i = 0; i < 2; i++) {
				cout << "\nEnter length :";
				cin >> (rectptr[i]).l;
				cout << "\nEnter width :";
				cin >> (rectptr[i]).w;
				cout << "\nEnter Color :";
				cin >> (rectptr[i]).color;
				cout << "\nThe area is :" << (rectptr[i]).getArea() << "\n";
				cout << "\nThe perimeter is :" << (rectptr[i]).getPerimeter() << "\n";
				cout << "\nThe color is :" << (rectptr[i]).getColor() << "\n";
			}
		}
		else if (Shp.type == "Triangle") {
			Triangle* triangleptr = new Triangle[2];
			for (int i = 0; i < 2; i++) {

				cout << "\nEnter Base :";
				cin >> (triangleptr[i]).b;
				cout << "\nEnter Height :";
				cin >> (triangleptr[i]).h;
				cout << "\nEnter Hypotenuse :";
				cin >> (triangleptr[i]).hy;
				cout << "\nEnter Color :";
				cin >> (triangleptr[i]).color;
				cout << "\nThe area is :" << (triangleptr[i]).getArea() << "\n";
				cout << "\nThe perimeter is :" << (triangleptr[i]).getPerimeter() << "\n";
				cout << "\nThe color is :" << (triangleptr[i]).getColor() << "\n";
			}
		}
	}

//}