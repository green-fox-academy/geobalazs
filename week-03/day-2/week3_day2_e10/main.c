#include <stdio.h>
#include <string.h>

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function


int main()
{
    //printf("Type in a sentence:\n\n");
    char string[256] = "Hello World, here I am!";
    const char s[] = " ";
    char *token;

    token = strtok(string , s);

    while (token != NULL) {
        printf(" %s\n" , token);

        token = strtok(NULL , s);
    }




    return(0);
}
