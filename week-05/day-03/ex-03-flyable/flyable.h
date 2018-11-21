#ifndef EX_03_FLYABLE_FLYABLE_H
#define EX_03_FLYABLE_FLYABLE_H


class Flyable {
public:
    virtual void land() = 0;
    virtual void fly() = 0;
    virtual void takeOff() = 0;
};


#endif //EX_03_FLYABLE_FLYABLE_H
