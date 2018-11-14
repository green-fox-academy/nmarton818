//
// Created by Nagy Márton on 2018-11-14.
//

#ifndef EX_14_PIRATES_PIRATE_H
#define EX_14_PIRATES_PIRATE_H


class Pirate {
private:
    bool _hasParrot;
    bool _isAlive;
    bool _isAwake;
    int _drinksHeHad;
public:
    Pirate();
    void die();
    void fallAsleep();
    void drinkSomeRum();
    void howsItGoingMate();
    void brawl(Pirate& pirate);
    void getParrot();

};


#endif //EX_14_PIRATES_PIRATE_H
