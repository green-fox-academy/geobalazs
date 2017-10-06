#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    float w = 25%2;
	int out = 0;
	// if w is even increment out by one
	if (w == 0){
       out++;
	}
    printf("%d" , out);
    return 0;
}
