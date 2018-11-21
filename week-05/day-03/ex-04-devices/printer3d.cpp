#include "printer3d.h"
#include "printer.h"

Printer3d::Printer3d(int sizeX, int sizeY, int sizeZ) : Printer(sizeX, sizeY), _sizeZ(sizeZ) {}

std::string Printer3d::getSize() const {
    return std::to_string(_sizeX) + " X " + std::to_string(_sizeY) + " X " + std::to_string(_sizeZ);
}