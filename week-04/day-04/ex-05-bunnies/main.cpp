#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
int floppyEars(int n){
    if(n > 0){
        std::cout << n << ' ';
        return 2 + floppyEars(n-1);
    } else return 0;
}


int main() {
    std::cout << floppyEars(20) << std::endl;
    return 0;
}