#include "Sphere.h"

Sphere:: Sphere(double r) : 
	Circle(r) {
	}

void Sphere :: printr() {
	Circle :: printr();
}

void Sphere::printvol() {
	cout << "Volume=" << area;
}

double Sphere::area(double r) {
	double v;
	v = 4 * 3, 14 * r * r * r / 3;
	return v;
}
