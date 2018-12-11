#include <stdio.h>
#include <stdlib.h>

int main() {

    // with malloc
    // please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
    // please delete the array before the program exits
    
    int size = 10;
    int* array = (int*) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        if(i < 5)
            array[i] = i;
        printf("%d ", array[i]);
    }

    return 0;
}