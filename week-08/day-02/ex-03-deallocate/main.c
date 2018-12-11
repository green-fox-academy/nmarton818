#include <stdio.h>
#include <stdlib.h>

int main() {

    // with calloc
    // please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
    // please delete the array before the program exits
    // what's the difference between this and the previous excersice?

    int size = 10;
    int* array = (int*) calloc(size, sizeof(int));
    for(int i = 0; i < size; i++){
        if(i < 5)
            array[i] = i;
        printf("%d ", array[i]);
    }

    realloc(array, 0);

    return 0;
}