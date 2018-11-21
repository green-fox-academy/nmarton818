#ifndef EX_01_INSTRUMENTS_INSTRUMENT_H
#define EX_01_INSTRUMENTS_INSTRUMENT_H

#include<iostream>

class Instrument {
protected:
    std::string _name;
public:
    Instrument(std::string name);
    virtual void play() const = 0;
    virtual void sound() const = 0;
};


#endif //EX_01_INSTRUMENTS_INSTRUMENT_H
