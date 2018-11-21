#ifndef EX_04_DEVICES_PRINTER2D_H
#define EX_04_DEVICES_PRINTER2D_H

#include "printer.h"

class Printer2d : public Printer{
public:
    Printer2d(int sizeX, int sizeY);
    virtual std::string getSize() const;
};


#endif //EX_04_DEVICES_PRINTER2D_H
