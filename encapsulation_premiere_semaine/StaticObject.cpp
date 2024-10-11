#include "StaticObject.h"
#include <iostream>


StaticObject::StaticObject(Vector2 pos) : Entity(pos) {

    std::cout << "Static Object just created at x = " << pos.x << " and y = " << pos.y << std::endl;
}