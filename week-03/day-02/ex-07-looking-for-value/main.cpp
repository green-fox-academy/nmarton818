#include <iostream>

int index(int a[], int lenght, int parameter){
    for(int i = 0; i < lenght; i++){
        if(a[i] == parameter)
            return i;
    }
    return 0;
}


int main() {
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0
    int t[10] = {1, 2, 4, 5, 99, 11, 55, 0, 33, 7};
    int num;

    std::cout << index(t, 10, 7) << std::endl;

    return 0;
}