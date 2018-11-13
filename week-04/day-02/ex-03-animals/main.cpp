#include <iostream>
#include "animals.h"

int main() {
    /*Create an Animal class
    Every animal has a hunger value, which is a whole number
    Every animal has a thirst value, which is a whole number
    when creating a new animal object these values are created with the default 50 value
    Every animal can eat() which decreases their hunger by one
    Every animal can drink() which decreases their thirst by one
    Every animal can play() which increases both by one */

    Animals cica;
    cica.printAnimal();

    Animals corgi(100, 100);
    corgi.printAnimal();
    cica.eat();
    cica.printAnimal();
    corgi.printAnimal();

    for(int i = 0; i < 10; i++){
        cica.play();
        corgi.play();
    }

    cica.printAnimal();
    corgi.printAnimal();

    return 0;
}