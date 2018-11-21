#ifndef EX_01_INSTRUMENTS_BASSGUITAR_H
#define EX_01_INSTRUMENTS_BASSGUITAR_H

#include "stringedinstrument.h"

class BassGuitar : public StringedInstrument {
public:
    BassGuitar();
    BassGuitar(int numberOfStrings);
    void play() const;
    void sound() const;


};


#endif //EX_01_INSTRUMENTS_BASSGUITAR_H
