#include "reptile.h"
#include<iostream>

Reptile::Reptile(Diet diet, Gender gender, std::string name, std::string nickName) : Animal(diet, gender, name, nickName) {};

std::string Reptile::getName() const {
    return _nickName + " who is a " + _name;
}

void Reptile::breed() const {
    std::cout << getName() << " is breeding by laying eggs." << std::endl;
}

void Reptile::noise() const {
    std::cout << "REEEEE" << std::endl;
}
