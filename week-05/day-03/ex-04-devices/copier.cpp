#include "copier.h"
#include "printer2d.h"
#include "scanner.h"
#include <iostream>

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2d(sizeX, sizeY), Scanner(speed){}

void Copier::copy() const {
    scan();
    std::cout << " and ";
    print();
}

void Copier::scan() const {
    std::cout << "I'm scanning a document " << _speed << " ppm";
}
