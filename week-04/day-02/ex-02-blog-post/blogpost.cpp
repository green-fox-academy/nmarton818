//
// Created by Nagy Márton on 2018-11-13.
//

#include "blogpost.h"
#include <string>
#include <iostream>

BlogPost::BlogPost(){
    _authorName = "Lucky Bucky";
    _text = "Pretty cool, huh?";
    _publicationDate = "2018.11.13.";
    _title = "C++ tutorial";
}

BlogPost::BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate) {
    _authorName = authorName;
    _title = title;
    _text = text;
    _publicationDate = publicationDate;
}

void BlogPost::printBlogPost() {
    std::cout << "'" <<_title << "' titled by " << _authorName << " posted at: " << _publicationDate << std::endl;
    std::cout << _text << std::endl;
}

