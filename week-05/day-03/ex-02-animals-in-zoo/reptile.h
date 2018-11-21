#ifndef EX_02_ANIMALS_IN_ZOO_REPTILE_H
#define EX_02_ANIMALS_IN_ZOO_REPTILE_H

#include "animal.h"

class Reptile : public Animal{
public:
    Reptile(Diet diet, Gender gender, std::string name, std::string nickName);
    std::string getName() const;
    void breed() const;
    void noise() const;
};


#endif //EX_02_ANIMALS_IN_ZOO_REPTILE_H
