#include <stdio.h>

	//TODO: write a function which swaps the values of x and y. Then print out the values of x and y.


void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;


return;
}

int a = 2;
int *p_a = &a;

int main()
{
	int x = 5;
	int y = 8;
	//int *p_x = &x;
	//int *p_y = &y;

	printf("Before Swapping\nx = %d\ny = %d\n", x, y);

//    swap(p_x , p_y);

//	printf("After Swapping\nx = %d\ny = %d\n", x, y);

    swap(&x , &y);

	printf("After Swapping\nx = %d\ny = %d\n", x, y);


	return 0;
}
