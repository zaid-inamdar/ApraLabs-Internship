#pragma once


#include<iostream>
#include<string.h>
#include"Shape.h"

using namespace std;

class Rectangle : Shape {
public:
	double l;
	double w;
	string color;
public:
	string getType() {
		return type;
	}
	double getlength() {
		return l;
	}
	double getwidth() {
		return w;
	}
	double getPerimeter() {
		return 2 * (l + w);
	}
	double getArea() {
		return l * w;
	}
	string getColor() {
		return color;
	}
};
