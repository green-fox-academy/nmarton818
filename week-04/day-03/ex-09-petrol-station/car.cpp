//
// Created by Nagy Márton on 2018-11-14.
//

#include "car.h"
#include "station.h"

Car::Car(int _gasAmount, int _capacity) : _gasAmount(_gasAmount), _capacity(_capacity) {};

bool Car::isFull() {
    return (_capacity == _gasAmount);
}

void Car::fill() {
    _gasAmount++;
}
