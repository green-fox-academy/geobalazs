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
    printf("Give three number and divide them with space or enter:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("\n");
    printer(num1,num2,num3);
    return 0;
}

void printer(int num1, int num2, int num3){
        printf("Your numbers:\n");
        printf("%d\n\n" , num1);
        printf("%d\n\n" , num2);
        printf("%d\n\n" , num3);
}
