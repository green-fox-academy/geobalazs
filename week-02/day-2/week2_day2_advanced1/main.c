#include <stdio.h>

int main()
{
    int arr[50];

    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting

    int array_size = 0;
    int index = 0;

    printf("Give a number to size your array(max size is 50):\n");

    scanf("%d" , &array_size);

    for (int i = 0 ; i <= array_size ; i++){
            arr[i] = i;
            printf("%d\t" , arr[i]);
    }

    printf("\nGive a number for a position to delete one number from your array from 0 to %d:\n" , array_size);

    scanf("%d" , &index);

    for(int i = index - 1 ; i < array_size ; i++){
        arr[i] = arr[i+1];
    }

    printf("Array after deletion of index %d\n" , index);

    for(int i = 0 ; i < array_size ; i++){

        printf("%d\t" , arr[i]);

    }

    return 0;
}
