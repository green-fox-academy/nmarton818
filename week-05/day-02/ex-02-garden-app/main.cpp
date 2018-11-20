#include <iostream>
#include "tree.h"
#include "flower.h"
#include "plant.h"
#include "garden.h"

int main() {

    Flower a;
    Flower b("yellow");
    Flower c(4, "blue");
    Tree d;
    Tree e("green");
    Tree f(7,"brown");

    Garden gard;
    gard.addPlant(&a);
    gard.addPlant(&b);
    gard.addPlant(&c);
    gard.addPlant(&d);
    gard.addPlant(&e);
    gard.addPlant(&f);

    gard.printGarden();
    gard.distributeWater(10);
    std::cout << "-------------------" << std::endl;
    gard.printGarden();
    std::cout << "-------------------" << std::endl;
    gard.distributeWater(10);
    gard.printGarden();

    return 0;
}