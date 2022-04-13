#include<iostream>
#include<string.h>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
using namespace std;

int main()
{
	int num;
	cout << "Enter number of Shapes:";
	cin >> num;
	for (int i = 0; i < num; i++) {
		Shape Shp;
		cout << "Enter type of shape:  (name) \n 1.Circle \n 2.Rectangle \n 3.Triangle \n";
		cin >> Shp.type;
		if (Shp.type == "Circle") {
			Circle c1;
			Circle* circleptr = new Circle();
			cout << "\nEnter Radius :";
			cin >> circleptr->radius;
			cout << "\nEnter Color :";
			cin >> circleptr->color;
			cout << "\nThe area is :" << circleptr->getArea() << "\n";
			cout << "\nThe perimeter is :" << circleptr->getPerimeter() << "\n";
			cout << "\nThe color is :" << circleptr->getColor() << "\n";
		}
		else if (Shp.type == "Rectangle") {
			Rectangle r1;
			Rectangle* rectptr = new Rectangle();
			cout << "\nEnter length :";
			cin >> rectptr->l;
			cout << "\nEnter width :";
			cin >> rectptr->w;
			cout << "\nEnter Color :";
			cin >> rectptr->color;
			cout << "\nThe area is :" << rectptr->getArea() << "\n";
			cout << "\nThe perimeter is :" << rectptr->getPerimeter() << "\n";
			cout << "\nThe color is :" << rectptr->getColor() << "\n";
		}
		else if (Shp.type == "Triangle") {
			Triangle t1;
			Triangle* triangleptr = new Triangle();
			cout << "\nEnter Base :";
			cin >> triangleptr->b;
			cout << "\nEnter Height :";
			cin >> triangleptr->h;
			cout << "\nEnter Hypotenuse :";
			cin >> triangleptr->hy;
			cout << "\nEnter Color :";
			cin >> triangleptr->color;
			cout << "\nThe area is :" << triangleptr->getArea() << "\n";
			cout << "\nThe perimeter is :" << triangleptr->getPerimeter() << "\n";
			cout << "\nThe color is :" << triangleptr->getColor() << "\n";
		}
	}

}