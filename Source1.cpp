#include <iostream>
#include "Point.h"
#include <sstream>

std::string ToString()
{

	std::stringstream stream;

	stream << "Point : " << " x: " << Point::x << " y: " << Point::y << " z: " << Point::z;
	return stream;

}
