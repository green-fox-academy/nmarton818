#ifndef EX_04_DEVICES_PRINTER_H
#define EX_04_DEVICES_PRINTER_H


#include <string>

class Printer {
protected:
    int _sizeX;
    int _sizeY;
public:
    Printer(int sizeX, int sizeY);
    virtual std::string getSize() const = 0;
    virtual void print() const;
};


#endif //EX_04_DEVICES_PRINTER_H
