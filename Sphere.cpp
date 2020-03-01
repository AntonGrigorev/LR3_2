#include "Sphere.h"

Sphere:: Sphere(double r) : 
	Circle(r) {
	}

void Sphere::print() {
	cout << "Radius = " << radius << endl;
	cout << "Volume = " << area();
}

double Sphere::area() {
	double v;
	v = 4 * 3.14 * radius * radius * radius / 3;
	return v;
}

