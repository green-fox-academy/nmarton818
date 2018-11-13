//
// Created by Nagy Márton on 2018-11-13.
//

#ifndef EX_04_COUNTER_COUNTER_H
#define EX_04_COUNTER_COUNTER_H


class Counter {
private:
    int _number;
    int _initNum;
public:
    Counter();
    Counter(int number);
    void add();
    void add(int number);
    int get();
    void reset();

};


#endif //EX_04_COUNTER_COUNTER_H
