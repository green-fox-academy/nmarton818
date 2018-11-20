#include "plant.h"
#include <iostream>

Plant::Plant(float waterAmount, const std::string& color) : _waterAmount(waterAmount), _color(color) {}

std::string Plant::getColor() const{
    return _color;
}

float Plant::getWaterAmount() const{
    return _waterAmount;
}
