//
// Created by Nagy Márton on 2018-11-14.
//

#include "station.h"
#include "car.h"
#include <iostream>

Station::Station(int _gasAmount) : _gasAmount(_gasAmount) {}

void Station::fill(Car& car) {
     while (!car.isFull()){
      std::cout << "Filling car!" << std::endl;
           car.fill();
           _gasAmount--;
 }
 std::cout << _gasAmount << "l petrol is left in the station." << std::endl;
}
