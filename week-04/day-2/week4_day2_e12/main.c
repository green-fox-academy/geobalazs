#include <stdio.h>

void print_array(int *array, int size){

    for(int i = 0 ; i < size ; i++){
        printf("%d'" , array[i]);
    }

}

int main()
{
	int a[] = {6, 8, 48, 1, -9, 89};
    int length = sizeof(a) / sizeof(*a);
    //printf("%d", length);
     print_array(a, length);

    //printf("%x" , a);
	//TODO: write a function, which prints out the passed array's elements.

	return 0;
}
