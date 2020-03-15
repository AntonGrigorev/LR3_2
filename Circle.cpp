#include "Circle.h"
#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 0;
}

Circle::Circle(double r) {
	radius = r;
}

double Circle::area() {
	double s;
	s = M_PI * radius * radius;
	return s;
}

 void Circle::print() {
	 cout << "Radius = " << radius << endl;
	 cout << "Area = " << area();
}