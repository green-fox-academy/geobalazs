#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	if(j1 > j2*j2 && j1 < j2*j2*j2 ){
    printf("Hello world!\n");
    } else {
        printf("try again");
    }
    return 0;
}
