#ifndef EX_01_INSTRUMENTS_STRINGEDINSTRUMENT_H
#define EX_01_INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "instrument.h"


class StringedInstrument : public Instrument {
protected:
    int _numberOfStrings;
public:
    StringedInstrument(std::string name, int numberOfStrings);
    virtual void sound() const = 0;
    virtual void play() const = 0;

};


#endif //EX_01_INSTRUMENTS_STRINGEDINSTRUMENT_H
