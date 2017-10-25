#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TODO:
// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them


typedef struct {
    int x;
    int y;
} point_t;

point_t create_point(int x , int y);

float dist_calc(point_t point1 , point_t point2);


int main()
{
    int a = 0;
    int b = 0;

    printf("Give me two number:");
    scanf("%d" , &a);
    scanf("%d" , &b);
    point_t point_one = create_point( 4 , 2);

    printf("Give me two number:");
    scanf("%d" , &a);
    scanf("%d" , &b);
    point_t point_two = create_point( 5 , 10);

    float dist = dist\_calc( point_one , point_two );
    printf("%f" , dist);
    return 0;
}

point_t create_point(int x , int y){

    point_t result;
    result.x = x;
    result.y = y;
    return result;
}

float dist_calc(point_t point1 , point_t point2){

    float distance;
    distance = sqrt (pow( (point2.x - point1.x) , 2) + pow( (point2.y - point1.y) , 2));

return distance;
}
