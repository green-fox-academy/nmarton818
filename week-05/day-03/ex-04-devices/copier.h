#ifndef EX_04_DEVICES_COPIER_H
#define EX_04_DEVICES_COPIER_H

#include "scanner.h"
#include "printer2d.h"

class Copier : public Scanner, public Printer2d {
public:
    Copier(int sizeX, int sizeY, int speed);
    void copy() const;
    void scan() const override;
};


#endif //EX_04_DEVICES_COPIER_H
