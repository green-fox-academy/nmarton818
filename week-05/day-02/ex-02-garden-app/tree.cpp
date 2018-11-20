#include "tree.h"
#include "flower.h"

Tree::Tree(float waterAmount, const std::string& color) : Plant(waterAmount, color) {};

Tree::Tree() : Plant(0, "red") {};

Tree::Tree(const std::string& color) : Plant(0, color){};

void Tree::watering(float water) {
    _waterAmount += water * 0.4;
}

bool Tree::needsWater() {
    return _waterAmount < 10;
}

std::string Tree::getType() {
    return "tree";
}