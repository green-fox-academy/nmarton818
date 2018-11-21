#include "vehicle.h"

Vehicle::Vehicle(int capacity, int gasAmount) : _capacity(capacity), _gasAmount(gasAmount), _needsRefill(gasAmount < capacity /4){}

