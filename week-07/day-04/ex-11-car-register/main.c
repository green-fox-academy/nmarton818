#include <stdio.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */
typedef enum transmission{
    manual,
    automatic,
    CVT,
    semi_automatic,
    dual_clutch
} transmission_t;

typedef struct car{
    char name[100];
    float price;
    int year;
    transmission_t transmission;
}car_t;

int get_older_cars_than(car_t* cars, int size, int age){
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if((2018 - cars[i].year) > age)
            cnt++;
    }
    return cnt;
}

int get_transmission_count(car_t* cars, int size, transmission_t trnsm){
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if(cars[i].transmission == trnsm)
            cnt++;
    }
    return cnt;
}

int main() {
    car_t cars[10];
    for(int i = 0; i < 10; i++){
        cars[i].transmission = dual_clutch;
        cars[i].year = 1994 + i;
        cars[i].price = 10000;
    }
    cars[4].transmission = semi_automatic;
    cars[4].year = 1990;
    
    printf("%d older than %d years\n", get_older_cars_than(cars, 10, 20), 20);
    printf("%d older than %d years\n", get_older_cars_than(cars, 10, 25), 25);
    printf("%d has dual-clutch transmission\n", get_transmission_count(cars, 10, dual_clutch));
    printf("%d has semi-automatic transmission\n", get_transmission_count(cars, 10, semi_automatic));

    return 0;
}