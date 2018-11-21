#ifndef EX_01_INSTRUMENTS_ELECTRICGUITAR_H
#define EX_01_INSTRUMENTS_ELECTRICGUITAR_H

#include "stringedinstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar();
    explicit ElectricGuitar(int numberOfStrings);
    void play() const;
    void sound() const;
};


#endif //EX_01_INSTRUMENTS_ELECTRICGUITAR_H
