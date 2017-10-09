#include <stdio.h>
#include <stdlib.h>
#include "printer.h"

// Create a function called `printer`
// which prints the input parameters
// can have multiple number of arguments
// store your variables in a .h file

void printer();

int main()
{
    scanf("%d %d %d",&num1,&num2,&num3);
    printer(num1,num2,num3);
    return 0;
}

void printer(int num1, int num2, int num3){
        printf("%d\n" , num1);
        printf("%d\n" , num2);
        printf("%d\n" , num3);
}
