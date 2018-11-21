#ifndef EX_03_FLYABLE_HELICOPTER_H
#define EX_03_FLYABLE_HELICOPTER_H


#include "vehicle.h"
#include "flyable.h"

class Helicopter : public Vehicle, public Flyable {
public:
    Helicopter(int capacity, int gasAmount);
    void refill() override;
    void land() override;
    void fly() override;
    void takeOff() override;
};


#endif //EX_03_FLYABLE_HELICOPTER_H
