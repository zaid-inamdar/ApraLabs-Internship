#include<iostream>
#include<string.h>
#include"Shape.h"
#include"circle.h"

using namespace std;

string Circle::getType() {
	return type;
}

double Circle::getRadius() {
	return radius;
}


double Circle::getPerimeter() {
	return radius * 3.14 * 2;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

string Circle::getColor() {
	return color;
}