#ifndef Sphere_H
#define Sphere_H
#include "Circle.h"
#include <iostream>
using namespace std;

class Sphere: public Circle
{
public:
	Sphere(double r);
	void print();
	double area();
};

#endif

