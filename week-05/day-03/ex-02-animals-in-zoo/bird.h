#ifndef EX_02_ANIMALS_IN_ZOO_BIRD_H
#define EX_02_ANIMALS_IN_ZOO_BIRD_H

#include "animal.h"

class Bird : public Animal{
public:
    Bird(Diet diet, Gender gender, std::string name, std::string nickName);
    std::string getName() const;
    void breed() const;
    void noise() const;
};


#endif //EX_02_ANIMALS_IN_ZOO_BIRD_H
