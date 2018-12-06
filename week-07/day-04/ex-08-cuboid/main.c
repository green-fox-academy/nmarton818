#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

typedef struct rectangular_cuboid {
    double a;
    double b;
    double c;
}rectangular_cuboid_t;

double get_surface(rectangular_cuboid_t cuboid){
    return 2*((cuboid.a * cuboid.b) + (cuboid.a * cuboid.c) + (cuboid.b * cuboid.c));
}

double get_volume(rectangular_cuboid_t cuboid){
    return cuboid.a * cuboid.b * cuboid.c;
}

int main() {
    rectangular_cuboid_t cuboid;
    cuboid.a = 1;
    cuboid.b = 10;
    cuboid.c = 5;

    printf("%.2f\n", get_surface(cuboid));
    printf("%.2f\n", get_volume(cuboid));

    return 0;
}