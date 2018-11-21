#include "aircraft.h"
#include<math.h>

Aircraft::Aircraft(Type type): _type(type), _ammo(0), _baseDamage((type == Type::F35) ? 50 : 30), _damageDealt(0) {};

int Aircraft::refill(int ammo) {
    int maxAmmo = (_type == Type::F35) ? 12 : 8;
    if(ammo + _ammo > maxAmmo){
        _ammo = maxAmmo;
        return abs(maxAmmo-ammo);
    } else{
        _ammo = ammo + _ammo;
        return 0;
    }
}

