//
// Created by Nagy Márton on 2018-11-14.
//

#ifndef EX_09_PETROL_STATION_CAR_H
#define EX_09_PETROL_STATION_CAR_H


class Car {
private:
    int _gasAmount;
    int _capacity;
public:
    Car(int gasAmount, int capacit);
    bool isFull();
    void fill();
};


#endif //EX_09_PETROL_STATION_CAR_H
