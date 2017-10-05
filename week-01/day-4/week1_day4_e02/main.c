#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
write a program to check whether a given number is positive or negative
*/

int main()
{
    int8_t a;

    printf(" Throw here your number:");
    scanf("%d" ,&a);

    if ( a > 0){

        printf("given number is positive");

    } else {

        printf("given number is negative");

    }
    return 0;

}
