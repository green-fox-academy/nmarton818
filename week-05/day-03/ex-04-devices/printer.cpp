#include "printer.h"
#include <iostream>

Printer::Printer(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY){};

void Printer::print() const {
    std::cout << "I'm printing something that is " << getSize() << " cm." << std::endl;
}


