#ifndef Sphere_H
#define Sphere_H
#include "Circle.h"
#include <iostream>
using namespace std;

class Sphere: public Circle
{
	public:
Sphere(double r) : Circle(r);

void printr();

void printvol();

double area(double r);
};

#endif

