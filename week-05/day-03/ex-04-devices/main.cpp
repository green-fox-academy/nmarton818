#include <iostream>
#include "printer.h"
#include "printer2d.h"
#include "printer3d.h"
#include "scanner.h"
#include "copier.h"
#include <vector>

int main() {
    Printer2d p1(1, 3);
    Printer2d p2(1, 3);
    Printer3d p3(1, 3, 4);
    Scanner s1(10);
    Scanner s2(20);
    Copier c1(1, 3, 10);

    std::vector<Printer*> someStuff;
    someStuff.push_back(&p1);
    someStuff.push_back(&p2);
    someStuff.push_back(&p3);
    someStuff.push_back(&c1);
    for(int i = 0; i < someStuff.size(); i++)
        someStuff[i]->print();

    std::cout << "------------------" << std::endl;

    std::vector<Scanner*> scanners;
    scanners.push_back(&s1);
    scanners.push_back(&s2);
    scanners.push_back(&c1);
    for(int i = 0; i < scanners.size(); i++)
        scanners[i]->scan();

    std::cout << "\n------------------" << std::endl;

    c1.copy();


    return 0;
}