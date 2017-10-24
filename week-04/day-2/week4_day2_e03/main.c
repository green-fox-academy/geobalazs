#include <stdio.h>

    //TODO:
    // update the value of number variable to 42 using the "number_pointer"

int main() {
    int number = 1234;
    int* number_pointer = &number;

    printf("\nThe value of number variable: %d\n" , number);

    *number_pointer = 42;

    printf("\nThe value of number variable after update: %d\n" , number);

    return 0;
}
