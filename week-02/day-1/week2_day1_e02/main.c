#include <stdio.h>
#include <stdlib.h>
#include "number.h"

// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file

int sum();

int main()
{
    printf("%d" , sum(NUMBER));

    return 0;
}

int sum (int NUMBER) {
    int j = 0;
        for(int i = 1; i <= NUMBER; i++){
            j += i;
        }
    return j;
}
