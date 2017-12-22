#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j1 = 0;
	int j2 = 0;

	printf("give j1:");
	scanf("%d" , &j1);
	printf("give j2:");
	scanf("%d" , &j2);
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	//if ( j2*j2 < j1 < j2*j2*j2){
	if(j1 > j2*j2 && j1 < j2*j2*j2 ){
    printf("Hello world!\n");
    } else {
        printf("try again");
    }
    return 0;
}
