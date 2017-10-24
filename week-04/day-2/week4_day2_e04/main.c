#include <stdio.h>
    //TODO:
    // The "number_pointer" should point to the first element of the array called "numbers",
    // than please print its value with it.

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    int* number_pointer = numbers;

    printf("The value of the first element in the numbers array: %d" , *number_pointer);

    return 0;
}
