#include <stdio.h>
#include <stdlib.h>

void abcprinter(char *array , int length);

int main()
{

    int a = 97;
    int z = 122;
    int abc_length = z - a;
    char abc[abc_length];

    for(int i = 0; i <= abc_length; i++ ){
        abc[i] = a + i;
    }

    int Capital_A = 65;
    int Capital_Z = 90;
    int Capital_abc_length = Capital_Z - Capital_A;
    //printf("%d" , Capital_abc_length);
    int Capital_abc[Capital_abc_length];

    for(int i = 0; i <= Capital_abc_length; i++ ){
        Capital_abc[i] = Capital_A + i;
       // printf("\n%c" , Capital_abc[i]);
    }

    abcprinter(abc , abc_length);
    printf("\n");
    abcprinter(Capital_abc , Capital_abc_length);


    return 0;
}

void abcprinter(char *array, int length){

    for(int i = 0; i <= length; i++){
    printf("%c " , array[i]);
    }
}
