#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //TODO: make an integer to string conversion with itoa(), first in binary, then decimal format
    // Store the string in buffer


int main()
{
	int a = 54325;
    char buffer[20];

    for (int i = 0 ; i< 20 ; i++){
        printf("'%c" , buffer[i]);
    }

    printf("\n");

    for (int i = 0 ; i< 20 ; i++){
        buffer [i] = 0;
        printf("'%d" , buffer[i]);
    }


    return 0;
}
