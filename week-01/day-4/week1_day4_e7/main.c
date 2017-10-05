#include <stdio.h>
#include <stdlib.h>

/*
create a simple program which checks if the num is odd or even
*/

int main()
{
    int a = 6;
    int num = a%2;
    int b;
    //printf("%d\n" , num);
    if ( num == 0){
        b=0;
        //printf("%d\n" , b);
    }else{
        b=1;
    }   //printf("%d\n" , b);
    switch (b){
    case 0 :
        printf( "even");
        break;
    case 1 :
        printf("odd");
        break;
    default :
        printf("Hello world!\n");
    }




    return 0;
}
