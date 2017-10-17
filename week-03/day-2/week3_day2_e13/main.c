#include <stdio.h>
#include <string.h>

	//TODO: write a program which prints out the distance between the first and last occurance of character 's'


int main ()
{
	char str[] = "This is a sample string";
    char *first, *last;

    first = strchr (str , 's');
    last = strrchr (str , 's');

    int distance = (last-str) - (first-str);

    printf("%d" , distance);


    return 0;
}
