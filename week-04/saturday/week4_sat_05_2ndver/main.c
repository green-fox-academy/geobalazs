#include <stdio.h>
#include <stdlib.h>

void abcprinter(char array[] , int length);

int main()
{

    int a = 97;
    int z = 122;
    int sum = z - a;
    char abc[sum];

    for(int i = 0; i <= sum; i++ ){
        abc[i] = a + i;
        //printf("%c  " , abc[i]);
    }

//    int array_length = sizeof(abc) / sizeof(abc[0]);
//    printf("%d\n" , sizeof(abc));
//    printf("%d\n" , sizeof(abc[0]));
//    printf("%d\n" , array_length);


    abcprinter(abc , sum);


    return 0;
}

void abcprinter(char array[], int length){

    for(int i = 0; i <= length; i++){
    printf("%c  " , array[i]);
    }
}
