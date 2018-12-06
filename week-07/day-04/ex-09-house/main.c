#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

typedef struct house{
    char address[30];
    int price;
    int rooms;
    float area;
} house_t;

int is_worth_buying(house_t* house){
    return (house->price < 400 * house->area);
}

int number_of_houses_worth_buying(house_t* houses, int size){
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if(is_worth_buying(&houses[i]))
            cnt++;
    }
    return cnt;
}

int main() {
    house_t houses[10];
    for(int i = 0; i < 10; i++){
        houses[i].price = (i+1) * 1500;
        houses[i].area = 30;
    }
    printf("%d houses are worth buying.\n", number_of_houses_worth_buying(houses, 10));

    return 0;
}