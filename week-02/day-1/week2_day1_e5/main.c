#include <stdio.h>
#include <stdlib.h>
#include "input.h"

// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//
int factorio(fact);

int main()
{

    printf("Please give a number for factorial calculation:");

    scanf("%d" , &fact);

    printf("%d" , factorio(fact));

    return 0;
}

int factorio(fact){

    if(fact == 0){
        return 1;
    }
    int result = fact;

    for(int i = 1 ; i < fact ; i++){
        result = result * i;
    }

    return result;
}
