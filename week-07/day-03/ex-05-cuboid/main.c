#include <stdio.h>

double surfaceArea(double x, double y, double z){
    return 2*((x*y) + (x*z) + (y*z));
}

double volume(double x, double y, double z){
    return x*y*z;
}

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000
    double x;
    double y;
    double z;
    printf("Gimme the x side!\n");
    scanf("%lf", &x);
    printf("Gimme the y side!\n");
    scanf("%lf", &y);
    printf("Gimme the z side!\n");
    scanf("%lf", &z);

    printf("The surface area of the cuboid is: %.2f\n", surfaceArea(x, y, z));
    printf("The volume of the cuboid is: %.2f\n", volume(x, y, z));

    return 0;
}