#include <stdio.h>
#include <string.h>

	//TODO: write a program which prints out the distance between the first and last occurance of character 's'


int main ()
{
	char str[] = "This is a sample string";
    char *first, *last;

    first = strchr (str , 's');

    printf("%d\n" , str);
    printf("%c\n" , first);
    printf("%d\n" , first);
    printf("%d" , first-str+1);
    //last = ;

    //for (int i = ; ; i++){


    //}

    return 0;
}
