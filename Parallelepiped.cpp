#include "Parallelepiped.h"
#include <iostream>

using namespace std;

Parallelepiped::Parallelepiped(double value1, double value2, double value3)
{
	while (value1 <= 0)
	{
		cout << "Enter value of a again: "; cin >> value1;
	}
	setA(value1);

	while (value2 <= 0)
	{
		cout << "Enter value of b again: "; cin >> value2;
	}
	setB(value2);

	while (value3 <= 0)
	{
		cout << "Enter value of c again: "; cin >> value3;
	}
	setC(value3);
}

double const Parallelepiped::getA()
{
	return a;
}

double const Parallelepiped::getB()
{
	return b;
}

double const Parallelepiped::getC()
{
	return c;
}

void Parallelepiped::setA(double value)
{
	a = value;
}

void Parallelepiped::setB(double value)
{
	b = value;
}

void Parallelepiped::setC(double value)
{
	c = value;
}

double Parallelepiped::Surface()
{
	double a = getA();
	return 2 * (a * b + b * c + a * c);
}

double Parallelepiped::Volume()
{
	return getA() * b * c;
}

void Parallelepiped::Display()
{
	cout << "Parallelepiped: " << endl;
	cout << " a=" << getA() << endl;
	cout << " b=" << b << endl;
	cout << " c=" << c << endl;
}

void Parallelepiped::Read()
{
	double value1, value2, value3;

	do {
		cout << "Enter value of a: "; cin >> value1;
	} while (value1 <= 0);
	setA(value1);

	do {
		cout << "Enter value of b: "; cin >> value2;
	} while (value2 <= 0);
	setB(value2);

	do {
		cout << "Enter value of c: "; cin >> value3;
	} while (value3 <= 0);
	setC(value3);
}

