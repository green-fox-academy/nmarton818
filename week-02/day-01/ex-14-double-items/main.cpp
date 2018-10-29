#include <iostream>

int doubling(int number){
    return number *2;
}

int main() {
    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList[] = {3, 4, 5, 6, 7};
    for(int i = 0; i < sizeof(numList) / sizeof(numList[0]); i++) {
        numList[i] = doubling(numList[i]);
        std::cout << numList[i] << ' ';
    }
    return 0;
}