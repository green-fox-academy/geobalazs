#include <stdio.h>
#include <stdlib.h>

//fill and print out abc from a to z, and A to Z in a function

void letters();

int main()
{

    letters();

    return 0;
}

void letters(){

    int a = 97;
    int z = 122;
    int sum = z - a;
    int abc[26];

    for(int i = 0; i <= sum; i++ ){
        abc[i] = a + i;
        printf("%c  " , abc[i]);
    }

    int Capital_A = 65;
    int Capital_Z = 90;
    int Capital_sum = Capital_Z - Capital_A;
    int Capital_abc[26];

    for(int i = 0; i <= sum; i++ ){
        Capital_abc[i] = Capital_A + i;
        printf("\n%c" , Capital_abc[i]);
    }
}
