#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void distribute_money(int* relatives, int size, int remaining_money){
    int lucky = rand() % size;
    remaining_money /= 2;
    if(remaining_money > 0){
        relatives[lucky] += remaining_money;
        printf("%d. relative receives: %d\n", lucky, remaining_money);
        distribute_money(relatives, size, remaining_money);
    }
}

int main() {
    srand(time(NULL));
    int relatives = 20 + (rand() % 31);
    // The rich uncle has just died and you need to distribute his heritage among the relatives.
    // The money you have to distribute is $1024
    // Generate a random number between 20 and 50.
    // This number will be the amount of relatives that showed up at the inheritance party.
    // Allocate an array for them. Each element of the array will represent a relative.
    // You need to generate a random number between 0 and the number of relatives to decide which one is the winner.
    // The winner always gets the half of the remaining money. You need to generate random numbers until all the money is gone.
    // Print the amount of money each relative got on the party. Print 0 for the unlucky ones.
    // For example: 0,0,0,0,128,4,0,0,2,0,512,0,0,0,0,0,0,32,0,64,0,0,1,8,0,0,16,256

    int* relativesArray = (int*) calloc(relatives, sizeof(int));

    distribute_money(relativesArray, relatives, 1024);
    printf("\n--------------------\n");
    for(int i = 0; i < relatives; i++)
        printf("%d. relative has: $%d.\n", i, relativesArray[i]);

    free(relativesArray);

    return 0;
}