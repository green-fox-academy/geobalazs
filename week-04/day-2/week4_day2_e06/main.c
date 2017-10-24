#include <stdio.h>

    //TODO:
    // The "other_high_number_pointer" should point to the same memory address
    // without using the "&" operator.

int main() {
    int high_number = 6655;
    int low_number = 2;

    int* high_number_pointer = &high_number;
    int* other_high_number_pointer = high_number_pointer;

    printf("\nThe address of high_number variable stored in high_number_pointer: %p\n" , high_number_pointer);
    printf("\nThe address of high_number variable stored in other_high_number_pointer: %p\n" , other_high_number_pointer);
    return 0;
}
