#include "helicopter.h"
#include "flyable.h"
#include "vehicle.h"
#include <iostream>

Helicopter::Helicopter(int capacity, int gasAmount) : Vehicle(capacity, gasAmount){}

void Helicopter::fly() {
    if(_gasAmount > 0) {
        _gasAmount--;
        std::cout << "I'm flying now!" << std::endl;
        fly();
    } else{
        std::cout << "I don't have enough fuel, I need to land now! ";
        land();
    }
}

void Helicopter::land() {
    std::cout << "I'm landing now!" << std::endl;
}

void Helicopter::takeOff() {
    if(_gasAmount > 2) {
        _gasAmount -= 2;
        std::cout << "I'm taking off now!" << std::endl;
        fly();
    } else{
        std::cout << "I don't have enough fuel to take off! I need to be refilled! ";
        _needsRefill = true;
        refill();
        takeOff();
    }
}

void Helicopter::refill() {
    if(_needsRefill) {
        _gasAmount = _capacity;
        std::cout << "Helicopter refilled!" << std::endl;
    }
    else
        std::cout << "Helicopter doesn't need fuel now!" << std::endl;

}