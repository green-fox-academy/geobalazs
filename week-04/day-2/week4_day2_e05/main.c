#include <stdio.h>

    //TODO:
    // The "number_pointer" should point to the third element of the array called "numbers",
    // than please print its value with it. Solve the problem without reusing the "&" operator
    // for geting the address of the third element.

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    int* number_pointer = &numbers[2];

    printf("\nThe 3rd element of the numbers array: %d\n" , *number_pointer);
    printf("\nThe address of the 3rd element of the numbers array: %p\n" , number_pointer);

    return 0;
}
