#include <stdio.h>

#define PI 3.1415

float circle_area(float radius){
    return radius * radius * PI;
}

int main() {
    // define a variable called PI with the value of 3.14
    // create a function which takes the radius of a circle as a parameter
    // and return the area of that cirle
    // area = radius * radius * PI
    float radius = 2.0;
    printf("The area of a %f radius circle is %f\n", radius, circle_area(radius));
    return 0;
}