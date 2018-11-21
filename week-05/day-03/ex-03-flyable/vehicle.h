#ifndef EX_03_FLYABLE_VEHICLE_H
#define EX_03_FLYABLE_VEHICLE_H


class Vehicle {
protected:
    int _capacity;
    int _gasAmount;
    bool _needsRefill;
public:
    Vehicle(int capacity, int gasAmount);
    virtual void refill() = 0;
};


#endif //EX_03_FLYABLE_VEHICLE_H
