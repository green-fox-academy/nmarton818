//
// Created by Nagy Márton on 2018-11-13.
//

#include <iostream>
#ifndef EX_02_BLOG_POST_BLOGPOST_H
#define EX_02_BLOG_POST_BLOGPOST_H


class BlogPost {
private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
public:
    BlogPost();
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);
    void printBlogPost();
};


#endif //EX_02_BLOG_POST_BLOGPOST_H
