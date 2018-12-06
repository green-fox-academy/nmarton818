#include <stdio.h>
#include <string.h>

/*
Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg?
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg
*/

typedef struct pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
} pirate_t;

int sum_of_gold(pirate_t* pirates, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += (pirates[i].gold_count);
    }
    return sum;
}

float avarage_gold(pirate_t* pirates, int size){
    return (float)(sum_of_gold(pirates, size) / size);
}

char* richest_with_wooden_leg(pirate_t* pirates, int size){
    int max_index = 0;
    for(int i = 0; i < size; i++){
        if((pirates[i].gold_count > pirates[max_index].gold_count) && pirates[i].has_wooden_leg)
            max_index = i;
    }
    return pirates[max_index].name;
}

int main() {
    pirate_t pirates[10];
    for(short i = 0; i < 10; i++){
        strcpy(pirates[i].name, "Random Robi");
        pirates[i].has_wooden_leg = 0;
        pirates[i].gold_count = 100 + i *2;
    }

    pirates[5].gold_count = 500;
    pirates[5].has_wooden_leg = 1;
    strcpy(pirates[5].name, "Captain Hook");

    pirates[6].gold_count = 600;
    pirates[6].has_wooden_leg = 0;
    strcpy(pirates[6].name, "Jack Sparrow");


    printf("sum of gold: %d\n", sum_of_gold(pirates, 10));
    printf("avarage gold: %.2f\n", avarage_gold(pirates, 10));
    printf("richest with wooden leg: %s\n", richest_with_wooden_leg(pirates, 10));

    return 0;
}