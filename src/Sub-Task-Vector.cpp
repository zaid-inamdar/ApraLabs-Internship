
#include <iostream>
#include <string>
#include "Shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <vector>
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
			vector<Circle> cir;
			for (int i = 0; i < 2; i++) {

				cout << "\nEnter Radius :";
				cin >> (C[i]).radius;
				cout << "\nEnter Color :";
				cin >> (C[i]).color;
				cir.push_back(C[i]);
				cout << "\n The area is :" << (cir[i]).getArea() << endl;
				cout << "\n The perimeter is :" << (cir[i]).getPerimeter() << endl;
				cout << "\n The color is :" << (cir[i]).getColor() << endl;
			}
		}
		else if (Shp.type == "Rectangle") {
			Rectangle R[2];
			vector<Rectangle> rec;
			for (int i = 0; i < 2; i++) {

				cout << "\nEnter Length :";
				cin >> (R[i]).l;
				cout << "\nEnter width :";
				cin >> (R[i]).w;
				cout << "\nEnter Color :";
				cin >> (R[i]).color;
				rec.push_back(R[i]);
				cout << "\n The area is :" << (rec[i]).getArea() << endl;
				cout << "\n The perimeter is :" << (rec[i]).getPerimeter() << endl;
				cout << "\n The color is :" << (rec[i]).getColor() << endl;
			}
		}
		else if (Shp.type == "Triangle") {
			Triangle T[2];
			vector<Triangle> tri;
			for (int i = 0; i < 2; i++) {

				cout << "\nEnter Base :";
				cin >> (T[i]).b;
				cout << "\nEnter Height :";
				cin >> (T[i]).h;
				cout << "\nEnter Hypotenuse :";
				cin >> (T[i]).hy;
				cout << "\nEnter Color :";
				cin >> T[i].color;
				tri.push_back(T[i]);
				cout << "\nThe area is :" << (tri[i]).getArea() << endl;
				cout << "\nThe perimeter is :" << (tri[i]).getPerimeter() << endl;
				cout << "\nThe color is :" << (tri[i]).getColor() << endl;
			}
		}
	}

}
