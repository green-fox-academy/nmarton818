#include <iostream>
#include "reptile.h"
#include "mammal.h"
#include "bird.h"

int main() {
    Reptile reptile(Diet::CARNIVORE, Gender::MALE, "Crocodile", "Bela");
    Mammal mammal(Diet::HERBIVORE, Gender::FEMALE, "Koala", "Mirjam");
    Bird bird(Diet::HERBIVORE, Gender::MALE, "Parrot", "Pityu");

    reptile.breed();
    reptile.noise();
    mammal.breed();
    mammal.noise();
    bird.breed();
    bird.noise();
    return 0;
}