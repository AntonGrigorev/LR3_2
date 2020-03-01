#include "Circle.h"
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
	s = 3.14 * radius * radius;
	return s;
}

 void Circle::print() {
	 cout << "Radius = " << radius << endl;
	 cout << "Area = " << area();
}