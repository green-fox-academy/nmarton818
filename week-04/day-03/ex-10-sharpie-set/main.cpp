#include <iostream>
#include <vector>
#include "sharpie.h"
#include "sharpieset.h"

int main() {
    /*Reuse your Sharpie class

    Create SharpieSet class
    it contains a list of Sharpies

    countUsable() -> sharpie is usable if it has ink in it
    removeTrash() -> removes all unusable sharpies
    Test your methods by making some sharpies and call them. Make sure they print something meaningful to the console.*/
    Sharpie a0("black", 1.1);
    Sharpie a1("red", 1.2);
    Sharpie a2("yellow", 1.3);
    Sharpie a3("blue", 1.4);
    Sharpie a4("black", 1.5);
    Sharpie a5("pink", 1.6);

    std::vector<Sharpie> s = {a0, a1, a2, a3, a4, a5};
    SharpieSet set(s);

    set.printSharpieSet();




    for(int i = 0; i < 100; i++){
        set.getSharpieSetElement(1).use();
        set.getSharpieSetElement(2).use();
        set.getSharpieSetElement(4).use();
        set.getSharpieSetElement(5).use();
    }
    std::cout << std::endl;
    set.printSharpieSet();
    set.countUsable();
    set.removeTrash();
    std::cout << std::endl;
    set.printSharpieSet();


    return 0;


}