#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[]="radrohanahordar";

    int str_l = strlen(str);

    for(int i = 0 ; i <= str_l ; i++){

        printf("'%c" , str[i]);
    }

    printf("\n");

    for(int i = str_l-1 ; i >= 0 ; i--){

        printf("'%c" , str[i]);

    }

}
