//
// Created by Nagy Márton on 2018-11-13.
//

#ifndef EX_01_POST_IT_POSTIT_H
#define EX_01_POST_IT_POSTIT_H

#include <string>

class PostIt {
private:
    std::string _backGroundColor;
    std::string _text;
    std::string _textColor;
public:
    PostIt();
    PostIt(std::string backgroundColor, std::string text, std::string textColor);
    void printPostIt();
};


#endif //EX_01_POST_IT_POSTIT_H
