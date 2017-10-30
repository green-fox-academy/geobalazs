#include <stdio.h>

int my_strlen(char *string){

    int counter = 0;

    for (int i = 0 ; string[i] != '\0' ; i++){
        counter++;
    }
    return counter;
}

int main()
{
	char my_string[50] = "Hello world!";

    printf("%d" , my_strlen(my_string));
	//TODO: implement your own strlen function.

	return 0;
}
