#include <stdio.h>
#include <math.h>


/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
 */

typedef struct point{
    float x;
    float y;
}point_t;

point_t create_point(float x, float y){
    point_t p;
    p.x = x;
    p.y = y;
    return p;
}

float difference_squared(float x1, float x2){
    return (x1 - x2) * (x1 - x2);
}

double distance(point_t p1, point_t p2){
    return sqrt(difference_squared(p1.x, p2.x) + difference_squared(p1.y, p2.y));
}


int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
