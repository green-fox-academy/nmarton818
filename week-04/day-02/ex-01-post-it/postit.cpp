//
// Created by Nagy Márton on 2018-11-13.
//

#include "postit.h"
#include <iostream>

PostIt::PostIt() {
    _text = "corgi";
    _backGroundColor = "yellow";
    _textColor = "black";
};

PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor) {
    _backGroundColor = backgroundColor;
    _text = text;
    _textColor = textColor;
};

void PostIt::printPostIt() {
    std::cout << "Background color: " <<_backGroundColor << std::endl;
    std::cout << "Text: " << _text << std::endl;
    std::cout << "Text color: "<< _textColor << std::endl;
};