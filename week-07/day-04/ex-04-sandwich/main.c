#include <stdio.h>

typedef struct sandwich{
    char name[100];
    float price;
    float weight;
}sandwich_t;

float price_of_order(sandwich_t* sandwich, int num){
    return num * sandwich->price;
}

int main() {
    /*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/
    return 0;
}