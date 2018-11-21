#include "printer2d.h"
#include <iostream>

Printer2d::Printer2d(int sizeX, int sizeY) : Printer(sizeX, sizeY){}

std::string Printer2d::getSize() const {
    return std::to_string(_sizeX) + " X " + std::to_string(_sizeY);
}

