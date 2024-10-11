#include <iostream>
#include "Vector2.h"
#include <string>


void Vector2::setx(float i)
{
	x = i;
}


void Vector2::sety(float j)
{
	y = j;
}

void Vector2::setx(std::string xStr)
{
	x = std::stof(xStr);
}


float Vector2::getx()
{
	return x;
}

float Vector2::gety()
{
	return y;
}

Vector2::Vector2() : x(0), y(0)
{
}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y){}