#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 0;
}

Circle::Circle(double r) {
	radius = r;
}

double Circle::area(double r) {
	double s;
	s = 3, 14 * r * r;
	return s;
}

 void Circle::printr() {
	cout << "Radius =" << radius;
}
 void Circle::printarea() {
	 cout << "Area=" << area;
 }