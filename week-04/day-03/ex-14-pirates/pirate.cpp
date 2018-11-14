//
// Created by Nagy Márton on 2018-11-14.
//
#include <random>
#include <time.h>
#include "pirate.h"
#include <iostream>


Pirate::Pirate() {
    _isAlive = true;
    _drinksHeHad = 0;
    _isAwake = true;
}

void Pirate::die() {
    _isAlive = false;
}

void Pirate::drinkSomeRum() {
    _drinksHeHad++;
}

void Pirate::howsItGoingMate() {
    if(_hasParrot)
        std::cout << "Ayyeee matey, pour me friend another!" << std::endl;
    else if(_drinksHeHad <= 4)
        std::cout << "Pour me anudder!" << std::endl;
    else{
        std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin?" << std::endl;
        _isAwake = false;
    }

}

void Pirate::fallAsleep() {
    _isAwake = false;
}

void Pirate::brawl(Pirate& pirate) {
    srand(time(NULL));
    int random = rand() % 1000;
    if(pirate._isAlive){
        if(random < 333)
            _isAlive = false;
        else if(random > 333 && random < 666)
            pirate.die();
        else{
            _isAwake = false;
            pirate.fallAsleep();
        }
    }
}

void Pirate::getParrot(){
    _hasParrot = true;
}