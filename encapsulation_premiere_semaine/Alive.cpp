#include "Alive.h"


Alive::Alive(float max, float current) {
    max_health = max;
    current_health = current;
}


float Alive::get_Max_health() const {
    return max_health;
}


float Alive::get_Current_health() const {
    return current_health;
}


void Alive::receive_Damage(float damage) {
    current_health -= damage;
    if (current_health<0)
    {
        current_health = 0;
    }
   
}