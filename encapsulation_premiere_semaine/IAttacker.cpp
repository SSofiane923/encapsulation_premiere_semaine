#include "IAttacker.h"
#include <iostream>

class AI : public IAttacker {
public:
    void attack(Alive* target) override {
        if (target) {
            std::cout << "AI attacks!" << std::endl;
            target->receive_Damage(20); 
        }
    }
};
