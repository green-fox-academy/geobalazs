#include <stdio.h>

    //TODO:
    // Please fix the problem and swap where the pointers point,
    // without using the "&" operator.



int main() {
    int high_number = 6655;
    int low_number = 2;

    int* high_number_pointer = &low_number;
    int* low_number_pointer = &high_number;

    printf("\n%p , %d\n" , high_number_pointer , *high_number_pointer);
    printf("%p , %d\n" , low_number_pointer , *low_number_pointer);

    int *high = low_number_pointer;
    int *low = high_number_pointer;

    printf ("\n%p, %d\n", high , *high);
    printf ("%p , %d\n", low , *low);




    return 0;
}