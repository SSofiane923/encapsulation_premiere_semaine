#pragma once

class Alive
{
    float max_health;
    float current_health;

public:

    Alive(float max, float current);

    virtual float get_Max_health() const;

    virtual float get_Current_health() const;

    virtual void receive_Damage(float damage);
};