#include <iostream>
#include "blogpost.h"

int main() {
    BlogPost b;
    BlogPost c("Jack Kerouac", "Words", "One day I'll find the right words and they'll be simple.", "1969");
    b.printBlogPost();
    c.printBlogPost();

    return 0;
}