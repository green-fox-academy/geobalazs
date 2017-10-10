#include <stdio.h>

int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};

	//TODO:
    // Print out the content of the arrays
    for (int i = 0 ; i <= 5; i++){

            printf("%d\t\t", int_array[i]);

    }
    printf("\n");
    printf("\n");

    for (int i = 0 ; i <= 5; i++){

            printf("%f.3\t", float_array[i]);

    }
    printf("\n");
    return 0;
}
