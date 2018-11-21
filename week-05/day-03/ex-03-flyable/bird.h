#ifndef EX_03_FLYABLE_BIRD_H
#define EX_03_FLYABLE_BIRD_H

#include "flyable.h"
#include "animal.h"

class Bird : public Animal, public Flyable{
public:
    Bird(Gender gender, std::string name, int age);
    void takeOff();
    void fly();
    void land();
    void sleep();
};


#endif //EX_03_FLYABLE_BIRD_H
