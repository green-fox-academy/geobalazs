#include <stdio.h>
#include <stdlib.h>

void palindrome(){

    char str[]="ruzs";

    printf("Give a word:\n");

    scanf("%s" , &str);

    int str_l = strlen(str);

    for(int i = 0 ; i <= str_l ; i++){

        printf("'%c" , str[i]);
    }

    printf("\n");

    for(int i = str_l-1 ; i >= 0 ; i--){

        printf("'%c" , str[i]);

    }

}

int main()
{
    palindrome();

}
