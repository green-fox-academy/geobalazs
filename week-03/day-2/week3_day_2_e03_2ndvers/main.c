#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //TODO: make an integer to string conversion with itoa(), first in binary, then decimal format
    // Store the string in buffer


int main()
{
	int a = 54325;
    char buffer[20];

    printf("Binary value: %s\n" , itoa( a , buffer , 2));

    printf("Decimal value: %s\n ", itoa( a , buffer , 10));

    for (int i = 1 ; i < 20 ; i++){

        printf("%c" , buffer[i]);
    }

    return 0;
}
