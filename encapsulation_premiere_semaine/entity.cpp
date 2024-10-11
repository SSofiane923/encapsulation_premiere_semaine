#include "Entity.h"


Entity::Entity( Vector2 pos) : position(pos) {}


Vector2 Entity::getPosition()  {
    return position;
}


void Entity::setPosition( Vector2 pos) {
    position = pos;
}


