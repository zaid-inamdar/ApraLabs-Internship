#include<iostream>
#include<string.h>
#include"Shape.h"
#include"rectangle.h"


using namespace std;


string Rectangle::getType() {
	return type;
}
double Rectangle::getlength() {
	return l;
}
double Rectangle::getwidth() {
	return w;
}
double Rectangle::getPerimeter() {
	return 2 * (l + w);
}
double Rectangle::getArea() {
	return l * w;
}
string Rectangle::getColor() {
	return color;
}


