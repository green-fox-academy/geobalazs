#include <stdio.h>

    //TODO:
    // print the memory address of the variable

int main() {
    int number = 1234;
    int *p_number = &number;

    printf("The memory address of the number variable: %p", p_number);

    return 0;
}
