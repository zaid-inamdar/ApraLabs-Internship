#include <iostream>
#include <string>
#include "Shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <memory>
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
			Circle C[2];
			shared_ptr<Circle> c1(new Circle());
			for (int i = 0; i < 2; i++) {
				
				cout << "\nEnter Radius :";
				cin >> (C[i]).radius;
				cout << "\nEnter Color :";
				cin >> (C[i]).color;
				cout << "\n The area is :" << (C[i]).getArea() << endl;
				cout << "\n The perimeter is :" << (C[i]).getPerimeter() << endl;
				cout << "\n The color is :" << (C[i]).getColor() << endl;
				cout << "\n The use count is :" << c1.use_count() << endl;
				
				
			}
		}
		else if (Shp.type == "Rectangle") {
			Rectangle R[2];
			shared_ptr<Rectangle> r1(new Rectangle());
			for (int i = 0; i < 2; i++) {

				cout << "\nEnter Length :";
				cin >> (R[i]).l;
				cout << "\nEnter width :";
				cin >> (R[i]).w;
				cout << "\nEnter Color :";
				cin >> (R[i]).color;
				cout << "\n The area is :" << (R[i]).getArea() << endl;
				cout << "\n The perimeter is :" << (R[i]).getPerimeter() << endl;
				cout << "\n The color is :" << (R[i]).getColor() << endl;
				cout << "\n The use count is :" << r1.use_count() << endl;
				
			}
		}
		else if (Shp.type == "Triangle") {
			Triangle T[2];
			shared_ptr<Triangle> t1(new Triangle());
			for (int i = 0; i < 2; i++) {

				cout << "\nEnter Base :";
				cin >> (T[i]).b;
				cout << "\nEnter Height :";
				cin >> (T[i]).h;
				cout << "\nEnter Hypotenuse :";
				cin >> (T[i]).hy;
				cout << "\nEnter Color :";
				cin >> T[i].color;
				cout << "\nThe area is :" << (T[i]).getArea() << endl;
				cout << "\nThe perimeter is :" << (T[i]).getPerimeter() << endl;
				cout << "\nThe color is :" << (T[i]).getColor() << endl;
				cout << "\n The use count is :" << t1.use_count() << endl;
				
			}
		}
	}

}