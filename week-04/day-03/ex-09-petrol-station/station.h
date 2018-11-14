//
// Created by Nagy Márton on 2018-11-14.
//
#include "car.h"
#ifndef EX_09_PETROL_STATION_STATION_H
#define EX_09_PETROL_STATION_STATION_H


class Station {
private:
    int _gasAmount;
public:
    Station(int gasAmount);
    void fill(Car& car);
};


#endif //EX_09_PETROL_STATION_STATION_H
