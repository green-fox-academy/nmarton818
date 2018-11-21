#include <iostream>
#include "flyable.h"
#include "helicopter.h"
#include "bird.h"


int main() {
    Helicopter helicopter(3, 3);
    helicopter.takeOff();
    helicopter.takeOff();

    Bird bird(Gender::FEMALE, "csorike", 10);
    bird.takeOff();
    return 0;
}