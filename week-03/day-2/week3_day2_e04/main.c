#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float val = 0;
	char str[5];

	strcpy(str, "3.14");

    val = atoi(str);
	printf("String value: %s , float value: %.2f", str , val);

	//TODO: print out the value of pi, first as a string, then a float value.

	return(0);
}
