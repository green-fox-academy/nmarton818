#include "bird.h"
#include<iostream>

Bird::Bird(Diet diet, Gender gender, std::string name, std::string nickName) : Animal(diet, gender, name, nickName) {};

std::string Bird::getName() const {
    return _nickName + " who is a " + _name;
}

void Bird::breed() const {
    std::cout << getName() << " is breeding by laying eggs." << std::endl;
}

void Bird::noise() const {
    std::cout << "CSIP" << std::endl;
}
