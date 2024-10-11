#include <iostream>
#include "Point.h"
#include <sstream>

Point::Point() : x(0.f), y(0.f), z(0.f) 
{
	x = 0.f;
	y = 0.f;
	z = 0.f;
}

std::string Point::ToString()
{

	std::stringstream stream;

	stream << "Point : " << " x: " << x << " y: " << y << " z: " << z;
	return stream.str();

}
