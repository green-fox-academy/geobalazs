#include <stdio.h>

int assort_odd_elements(int *array, int size){
    int i = 0;
    int counter = 0;

    for ( i = 0 ; i < size ; i++){
        if (array[i] % 2 == 0){
            array[counter] = array[i];
            counter++;
        }
    }
    return counter;
}

int main(void)
{
	int num_array[] = {8, 7, 9, 20, 3, 81, 79, 66};
    int length = sizeof(num_array)/sizeof(num_array[0]);


    int length_evens = assort_odd_elements(num_array , length);

    int j = 0;
    for ( j = 0 ; j < length_evens ; j++){
        printf("%d\t" , num_array[j]);
    }
    //TODO: write a function which filters out the odd elements of an integer array
    //do it in the original array
    //your return value should be the real size of the filtered array
    //print out the filtered array's elements


    return 0;
}
