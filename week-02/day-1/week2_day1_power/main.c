
#include <stdio.h>
#include <stdlib.h>

// create a function which returns the power of a base number

int powkb(base , power);


int main()
{
    int base = 2;
    int power = 7;
    printf ("%d" , powkb(base , power));
    return 0;
}

int powkb(base , power){
    int result = 1;
    for(int i = 1; i<= power ; i++){

        result = result * base;

    }
    return result;
}
