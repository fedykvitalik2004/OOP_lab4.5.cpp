#pragma once
#include "Body.h"

class Ball :
    public Body
{
    double a;
public:
    Ball(double);
    virtual ~Ball() {};

    double const getA() { return a; };
    void setA(double value) { a = value; };

    virtual double Volume() override;
    virtual double Surface() override;

    virtual void Display();
    virtual void Read();
};

