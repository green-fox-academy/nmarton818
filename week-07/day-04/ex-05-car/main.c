#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

typedef struct car {
    enum car_type type;
    double km;
    double gas;
} car_t;

void print_car_stats(car_t* car){
    switch (car->type){
        case TESLA: printf("TESLA with %.2fkms\n", car->km);
            break;
        case VOLVO: printf("VOLVO with %.2fkms and %.2fl of gas\n", car->km, car->gas);
            break;
        case TOYOTA: printf("TOYOTA with %.2fkms and %.2fl of gas\n", car->km, car->gas);
            break;
        case LAND_ROVER: printf("LAND ROVER with %.2fkms and %.2fl of gas\n", car->km, car->gas);
            break;
    }
}

int main() {
    car_t tesla;
    tesla.type = TESLA;
    tesla.gas = 0;
    tesla.km = 1000;

    car_t volvo;
    volvo.type = VOLVO;
    volvo.gas = 50.0;
    volvo.km = 10000;

    print_car_stats(&tesla);
    print_car_stats(&volvo);

    return 0;
}