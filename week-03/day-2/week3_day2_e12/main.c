#include <stdio.h>
#include <string.h>

	//TODO: write a program, which lists all position where character 'i' is found


int main ()
{
	char string[55] ="This is a string for testing";
	char *p;


    for (int i = 0; i < strlen(string); i++){

        if( string[i] == 'i'){

            printf("%d.: %c\t" , i , string[i]);
        }

    }


	return 0;
}
