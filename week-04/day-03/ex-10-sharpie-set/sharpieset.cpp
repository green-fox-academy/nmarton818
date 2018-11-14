//
// Created by Nagy Márton on 2018-11-14.
//
#include <iostream>
#include "sharpieset.h"

SharpieSet::SharpieSet(Sharpie& sharpie) {
    _sharpieSet.emplace_back(sharpie);
    if(sharpie.getInkAmount() > 0)
        _usable++;
}

SharpieSet::SharpieSet(std::vector<Sharpie>& sharpieSet) {
    std::cout << "Sharpieset is created!" << std::endl;
    _sharpieSet = sharpieSet;
    countUsable();
}

void SharpieSet::countUsable() {
    int cnt = 0;
    for(int i = 0; i < _sharpieSet.size(); i++){
        if(_sharpieSet[i].getInkAmount() > 0)
            cnt++;
    }
    std::cout << cnt << " sharpies are usable!" << std::endl;
    _usable = cnt;
}

void SharpieSet::removeTrash() {
    int removed = 0;
    for(int i = 0; i <= _sharpieSet.size()- removed + 1; i++){
        if(_sharpieSet[i].getInkAmount() <= 0) {
            _sharpieSet.erase(_sharpieSet.begin() + i);
            removed++;
            i--;
        }
    }
    std::cout << removed << " sharpies have been removed!" << std::endl;
}

void SharpieSet::printSharpieSet() {
    for(int i = 0; i < _sharpieSet.size(); i++)
        _sharpieSet[i].printSharpie();
}

Sharpie& SharpieSet::getSharpieSetElement(int elementNum) {
    return _sharpieSet[elementNum];
}