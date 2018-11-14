//
// Created by Nagy Márton on 2018-11-13.
//

#ifndef EX_04_SHARPIE_SHARPIE_H
#define EX_04_SHARPIE_SHARPIE_H


#include <string>

class Sharpie {
private:
    std::string _color;
    float _width;
    float _inkAmount;
public:
    Sharpie(std::string color, float width);
    void use();
    void printSharpie();
    float getInkAmount();
};


#endif //EX_04_SHARPIE_SHARPIE_H
