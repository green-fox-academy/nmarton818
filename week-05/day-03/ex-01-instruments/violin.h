#ifndef EX_01_INSTRUMENTS_VIOLIN_H
#define EX_01_INSTRUMENTS_VIOLIN_H

#include "stringedinstrument.h"

class Violin : public StringedInstrument{
public:
    Violin();
    void play() const;
    void sound() const;
};


#endif //EX_01_INSTRUMENTS_VIOLIN_H
