#include <iostream>
#include "postit.h"

int main() {

    PostIt p;
    PostIt q("red", "Yo wazzup?", "black");
    p.printPostIt();
    q.printPostIt();

    return 0;
}