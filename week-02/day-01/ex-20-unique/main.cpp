#include <iostream>
}


int* unique(int numbers[], int size){
    int* uniques;

    for(int i = 0; i < size; i++){

    }
}

int main() {
    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int uniqueNums[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
    int uniques;
    unique(numbers, 8);

    //std::cout << (unique(numbers,sizeof(numbers)/sizeof(numbers[0]))) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`
    return 0;
}