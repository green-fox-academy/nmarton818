//
// Created by Nagy Márton on 2018-11-14.
//

#ifndef EX_10_SHARPIE_SET_SHARPIESET_H
#define EX_10_SHARPIE_SET_SHARPIESET_H


#include <vector>
#include "sharpie.h"


class SharpieSet {
private:
    std::vector<Sharpie> _sharpieSet;
    int _usable;
public:
    SharpieSet(Sharpie& sharpie);
    SharpieSet(std::vector<Sharpie>& sharpieSet);
    Sharpie& getSharpieSetElement(int elementNum);
    void countUsable();
    void removeTrash();
    void printSharpieSet();
};


#endif //EX_10_SHARPIE_SET_SHARPIESET_H
