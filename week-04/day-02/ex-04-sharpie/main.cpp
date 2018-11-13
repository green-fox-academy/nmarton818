#include <iostream>
#include "sharpie.h"

int main() {
    Sharpie s("black", 20);
    Sharpie q("red", 11);

    for(int i = 0; i < 10; i++) {
        s.use();
        q.use();
    }
    s.printSharpie();
    q.printSharpie();

    return 0;
}