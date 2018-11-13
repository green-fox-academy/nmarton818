//
// Created by Nagy Márton on 2018-11-13.
//
#include <iostream>
#include "sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
    _inkAmount = 100.0f;
}

void Sharpie::use() {
    _inkAmount--;
}

void Sharpie::printSharpie() {
    std::cout << "color: " << _color << " width: " << _width << " ink amount: " << _inkAmount << std::endl;
}