#ifndef EX_02_ANIMALS_IN_ZOO_MAMMAL_H
#define EX_02_ANIMALS_IN_ZOO_MAMMAL_H

#include "animal.h"

class Mammal : public Animal{
public:
    Mammal(Diet diet, Gender gender, std::string name, std::string nickName);
    std::string getName() const;
    void breed() const;
    void noise() const;

};


#endif //EX_02_ANIMALS_IN_ZOO_MAMMAL_H
