#include <stdio.h>
#include <string.h>

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function


int main()
{

    char string[256];
    const char s[] = " ";
    char *token;

    printf("Type in a sentence:\n\n");
    gets(string);

    token = strtok(string , s);

    while (token != NULL) {
        printf(" %s\n" , token);

        token = strtok(NULL , s);
    }




    return(0);
}
