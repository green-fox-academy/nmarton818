//
// Created by Nagy Márton on 2018-11-13.
//

#include "animals.h"
#include <iostream>

Animals::Animals(){
    _hunger = 50;
    _thirst = 50;
};

Animals::Animals(int hunger, int thirst) {
    _hunger = hunger;
    _thirst = thirst;
}

void Animals::eat(){
    _hunger--;
};

void Animals::drink(){
    _thirst--;
};
void Animals::play(){
    _hunger++;
    _thirst++;
};

void Animals::printAnimal() {
    std::cout << "Hunger: " << _hunger << ' ' << "Thirst: " << _thirst << std::endl;
}
