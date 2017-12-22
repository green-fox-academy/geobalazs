#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int x, y;
	x = 5;
	y = 8;

	int p_x = &x;
	int p_y = &y;
	printf("Before Swapping\nx = %d\ny = %d\n", x, y);

    swap( p_x, p_y);
	//TODO: write a function which swaps the values of x and y. Then print out the values of x and y.

	return 0;
}

void swap(int *a, int *b){

    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("after Swapping\na = %d\nb = %d\n", *a, *b);
}
