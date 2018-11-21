#include "mammal.h"
#include<iostream>

Mammal::Mammal(Diet diet, Gender gender, std::string name, std::string nickName) : Animal(diet, gender, name, nickName) {};

std::string Mammal::getName() const {
    return _nickName + " who is a " + _name;
}

void Mammal::breed() const {
    std::cout << getName() << " is breeding by pushing miniature versions out." << std::endl;
}

void Mammal::noise() const {
    std::cout << "raw" << std::endl;
}
