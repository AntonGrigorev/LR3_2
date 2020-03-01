#include "Circle.h"
#include "Sphere.h"
#include <iostream>
using namespace std;

int main() {
	Circle C1(3);
	C1.print();
	cout << endl;
	Sphere S1(3);
	Circle* p;
	p = &S1;
	p->print();
}