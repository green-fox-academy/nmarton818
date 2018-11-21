#include "bird.h"

Bird::Bird(Gender gender, std::string name, int age) : Animal(gender, name, age){}

void Bird::takeOff() {
    std::cout << "CSIP-CSIP, I'm taking off!" << std::endl;
    fly();
}

void Bird::fly() {
    std::cout << "I'm flying noooow! CSIP-CSIP" << std::endl;
    land();
}

void Bird::land() {
    std::cout << "CSIP-CSIP I'm landing now!" << std::endl;
    sleep();
}

void Bird::sleep() {
    std::cout << "And after a tiring flight, the little bird is finally at rest! ZZZZ" << std::endl;
}
