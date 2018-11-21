#ifndef EX_03_AIRCRAFT_CARRIER_AIRCRAFT_H
#define EX_03_AIRCRAFT_CARRIER_AIRCRAFT_H

#include<iostream>

enum class Type{
    F16,
    F35
};

class Aircraft {
private:
    Type _type;
    int _ammo;
    int _baseDamage;
    int _damageDealt;
public:
    explicit Aircraft(Type type);
    void fight();
    int refill(int ammo);
    std::string getType();
    std::string getStatus();
    bool isPriority();



};


#endif //EX_03_AIRCRAFT_CARRIER_AIRCRAFT_H
