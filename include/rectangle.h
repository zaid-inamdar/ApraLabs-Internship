#pragma once


#include<iostream>
#include<string.h>
#include"Shape.h"


using namespace std;

class Rectangle : Shape {
public:
	double l{};
	double w{};
	string color;
public:
	string getType();

	double getlength();

	double getwidth();

	double getPerimeter();

	double getArea();

	string getColor();
};
