#include "flower.h"

Flower::Flower(float waterAmount, const std::string& color) : Plant(waterAmount, color) {};

Flower::Flower() : Plant(0, "red") {};

Flower::Flower(const std::string& color) : Plant(0, color) {};

void Flower::watering(float water) {
    _waterAmount += water * 0.75;
}

bool Flower::needsWater() {
    return _waterAmount < 5;
}

std::string Flower::getType() {
    return "flower";
}