#include <iostream>
#include "flyable.h"
#include "helicopter.h"
#include "bird.h"


int main() {
    Helicopter helicopter(3, 3);
    helicopter.takeOff();
    helicopter.takeOff();
    std::cout << "------------" << std::endl;
    Bird bird(Gender::FEMALE, "csorike", 10);
    bird.takeOff();
    return 0;
}