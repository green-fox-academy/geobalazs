#include <stdio.h>
#include <stdlib.h>
#include "number.h"

// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file

int sum();

int main()
{
    scanf("%d/n" , &number);
    printf("%d" , sum(number));

    return 0;
}

int sum (number) {
    int j = 0;
        for(int i = 1; i <= number; i++){
            j += i;
        }
    return j;
}
