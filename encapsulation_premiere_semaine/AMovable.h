#pragma once
#include "Vector2.h" 

class AMovable 
{
    Vector2 direction; 
    float speed;       

public:
    
    AMovable(Vector2 dir, float spd) : direction(dir), speed(spd) {}

    
    virtual void setDirection(Vector2 dir);

    
    virtual void setSpeed(float spd);
    
    virtual void move() = 0; 
};