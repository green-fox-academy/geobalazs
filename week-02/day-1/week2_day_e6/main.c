#include <stdio.h>
#include <stdlib.h>
#include "input.h"
// create a function called `doubling` that doubles it's input parameter
// again the parameters value should be stored in a .h file

int doubling (num);

int main()
{
    printf("%d",doubling (num));
    return 0;
}

int doubling(num){

    int result = num * 2;

    return result;
}

