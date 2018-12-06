#include <stdio.h>
#include "circle.h"

int main() {
    // define a variable called PI with the value of 3.14
    // create a function which takes the radius of a circle as a parameter
    // and return the area of that cirle
    // area = radius * radius * PI
    float radius = 2.0;
    printf("The area of a %.2f radius circle is %.2f\n", radius, circle_area(radius));
    printf("The circumference of a %.2f radius circle is %.2f\n", radius, circle_circumference(radius));
    return 0;
}