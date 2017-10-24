#include <stdio.h>

    //TODO:
    // Please fix the problem and swap the value of the variables,
    // without using the "high_number" and the "low_number" variables.


int main() {
    int high_number = 2;
    int low_number = 6655;

    int* high_number_pointer = &high_number;
    int* low_number_pointer = &low_number;

    int high = *low_number_pointer;
    int low = *high_number_pointer;

    printf("%d\n" , high);
    printf("%d\n" , low);

    return 0;
}
