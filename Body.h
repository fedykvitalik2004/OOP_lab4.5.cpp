#pragma once
class Body
{
public:
	virtual ~Body() = 0 {};

	virtual double Surface() = 0;
	virtual double Volume() = 0;

	virtual void Display() = 0;
	virtual void Read() = 0;
};

