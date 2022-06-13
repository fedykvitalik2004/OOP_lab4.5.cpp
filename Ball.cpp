#include "Ball.h"
#include <iostream>
#define PI 3.1415

using namespace std;

Ball::Ball(double value)
{
	while (value <= 0)
	{
		cout << "Enter value of R again: "; cin >> value;
	}
	setA(value);
}

double Ball::Volume()
{
	return 4 * PI * pow(getA(), 3) / 3;
}

double Ball::Surface()
{
	return 4 * PI * pow(getA(), 2);
}

void Ball::Display()
{
	cout << "Ball:" << endl;
	cout << " R=" << getA() << endl;
}

void Ball::Read()
{
	double value;

	do {
		cout << "R="; cin >> value;
	} while (value <= 0);
}