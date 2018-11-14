#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch
    Thing a("Get milk");
    Thing b("Remove the obstacles");
    Thing c("Stand up");
    c.complete();
    Thing d("Eat lunch");
    d.complete();

    fleet.add(a);
    fleet.add(b);
    fleet.add(c);
    fleet.add(d);

    std::cout << fleet.toString() << std::endl;
    return 0;
}