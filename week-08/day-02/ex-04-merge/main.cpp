#include <iostream>

int main() {

    // please allocate a 10 long array and fill it with even numbers
    // please allocate a 10 long array and fill it with odd numbers
    // select an array, and push the elements into the another array
    // print the array in descending order
    // delete the arrays after you don't use them

    int size = 10;
    int* evens = (int*) malloc(size * sizeof(int));
    int* odds = (int*) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
            evens[i] = i * 2;
            odds[i] = (i * 2) + 1;
    }

    evens = (int*)realloc(evens, 2 * size * sizeof(int));
    for(int i = 0; i < size; i++){
        evens[size + i] = odds[i];
    }

    for(int i = 0; i < size; i++){
        printf("%d %d ", evens[(2 * size)-i -1], evens[size-i-1]);
    }

    free(odds);
    free(evens);

    return 0;
}