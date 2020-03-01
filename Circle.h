#ifndef Circle_H
#define Circle_H

class Circle
{
protected:
	double radius;
public:
	Circle(double r);
	Circle();
	virtual double area();
	virtual void print();
};

#endif

