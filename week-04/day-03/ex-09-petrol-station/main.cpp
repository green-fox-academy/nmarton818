#include <iostream>
#include "station.h"
#include "car.h"

/*Petrol Station
Create Station and Car classes
Station
Members:
gasAmount
create a constructor that initializes the gasAmount
fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station
Car
Members:
gasAmount
capacity
create constructor for Car with 2 arguments(gasAmount and capacity)
car has 2 methods:
isFull() -> returns true if capacity equals to gasAmount, false otherwise
fill() -> increments the gasAmount by one.
In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.
*/

int main() {
    Station s(1000);
    Car c(10, 100);
    s.fill(c);
    return 0;
}