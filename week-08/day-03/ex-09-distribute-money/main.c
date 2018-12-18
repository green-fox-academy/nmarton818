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


    int* relativesArray = (int*) calloc(relatives, sizeof(int));

    distribute_money(relativesArray, relatives, 1024);
    printf("\n--------------------\n");
    for(int i = 0; i < relatives; i++)
        printf("%d. relative has: $%d.\n", i, relativesArray[i]);

    free(relativesArray);

    return 0;
}