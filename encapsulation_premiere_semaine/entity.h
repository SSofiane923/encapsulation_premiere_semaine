#pragma once
#include "Vector2.h" 
class Entity {
private:
    Vector2 position;  

public:
    Entity(Vector2 pos); 

    virtual Vector2 getPosition(); 
    virtual void setPosition(Vector2 pos);  
};

