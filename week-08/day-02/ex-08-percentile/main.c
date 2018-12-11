#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vector_sort(int* vector, int size);

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* matrix2vector(int** matrix, int x, int y){
    int* vector = (int*) malloc(x*y*sizeof(int));
    int k = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            vector[k] = matrix[i][j];
            k++;
        }
    }
    vector_sort(vector, x * y);
    return vector;
};

void vector_sort(int* vector, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i; j < size - 1; j++)
            if(vector[j] < vector[j+1])
                swap(&vector[j], &vector[j+1]);
    }
}
int percentile(int* vector, int size, int percentile){
    if(percentile > 100)
        return vector[size];
    if(percentile < 0)
        return -1;
    else;
}

int main() {
    //Read the size of a matrix(don't have to be squared matrix) from the console.
    //Allocate memory dynamically for the elements of the matrix, then read the elements.
    //Create a function which can calculate the n-th percentile of the elements.
    //Calculate the 80-th and the 90-th percentile.
    int x, y;
    printf("X: \n");
    scanf("%d", &x);
    printf("Y: \n");
    scanf("%d", &y);
    int** matrix = (int**) malloc(x * sizeof(int*));
    for(int i = 0; i < x; i++){
        matrix[i] = (int*) calloc(y, sizeof(int));
    }

    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            matrix[i][j] = i + j;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int* vector = matrix2vector(matrix, x, y);
    for(int i = 0; i < x * y; i++){
        printf("%d ", vector[i]);
    }

    return 0;
}