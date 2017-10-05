#include <stdio.h>
#include <stdlib.h>

/*
write a program that decides which number is bigger
use switch-statement
*/

int main()
{
    int num1;
    int num2;
    int num3;
    int b;

    num1 = 185;
    num2 = 96;
    num3 = num1 - num2;
    //printf("%d" , num3);
    if(num3 == 0){
        b = 1;
    } else if( num3 > 0){
        b = 2;
    } else{
        b = 3;
    }
    //printf("%d" , b);

    switch(b){
    case 1:
        printf("no one is bigger");
        break;
    case 2:
        printf("num1 is bigger");
        break;
     default:
        printf("num2 is bigger");
    }


    //printf("%d\n" , b);

    return 0;
}
