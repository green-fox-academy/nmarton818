#ifndef EX_04_DEVICES_PRINTER3D_H
#define EX_04_DEVICES_PRINTER3D_H

#include <iostream>
#include "printer.h"

class Printer3d : public Printer {
private:
    int _sizeZ;
public:
    Printer3d(int sizeX, int sizeY, int sizeZ);
    virtual std::string getSize() const;
};


#endif //EX_04_DEVICES_PRINTER3D_H
