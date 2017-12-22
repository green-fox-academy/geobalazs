#include <stdio.h>
#include <stdlib.h>

//fill abc string from a to z, print out

int main()
{
    int a = 97;
    int z = 122;
    int sum = z - a;

    int abc[26];


    for(int i = 0; i <= sum; i++ ){
        abc[i] = a + i;

        printf("%c'" , abc[i]);
    }

    return 0;
}
