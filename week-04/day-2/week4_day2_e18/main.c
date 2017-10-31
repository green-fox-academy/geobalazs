#include <stdio.h>

int first_word(char *string, char *first){

    //char first[50];
    int i = 0;

    for( i=0 ; string[i] != ' ' ; i++ ){
        first[i] = string[i];
       // printf("%c" , first[i]);
        first[i + 1] = '\0';
    }

    int size = strlen(first);
    //printf("%d" , size);
    //printf("%s" , first);

return size;
}

int main()
{
    //TODO: write a function, which extracts the first word of a given string.
    //return with the word's length

    char str[] = "Extracting the first word.";
    char first[50];

    printf("%s , %d" , first , first_word(str , first));

    return 0;
}
