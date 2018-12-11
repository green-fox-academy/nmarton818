#include <stdio.h>
#include <stdlib.h>

int main() {
    // Prompt the user to enter a number. This number will be X.
    // Allocate memory for X numbers and prompt the user to enter X numbers.
    // Allocate memory for the sum of the X numbers(Y) in the same array
    // Fill the array with numbers from 1 to Y, then print them
    int x;
    printf("Gimme the size of the array!\n");
    scanf("%d", &x);
    int* array = (int*) malloc(x * sizeof(int));
    int sum = 0;
    
    for(int i = 0; i < x; i++){
        printf("Gimme a number!\n");
        scanf("%d", &array[i]);
        sum += array[i];
    }

    array = (int*) realloc(array, (x+1)*sizeof(int));
    array[x] = sum;
    for(int i = 0; i <= x; i++){
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}