//
// Created by Nagy Márton on 2018-11-13.
//

#ifndef EX_03_ANIMALS_ANIMALS_H
#define EX_03_ANIMALS_ANIMALS_H


class Animals {
private:
    int _hunger;
    int _thirst;
public:
    Animals();
    Animals(int hunger, int thirst);
    void eat();
    void drink();
    void play();
    void printAnimal();
};


#endif //EX_03_ANIMALS_ANIMALS_H
