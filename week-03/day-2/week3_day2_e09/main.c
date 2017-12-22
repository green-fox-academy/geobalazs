#include <stdio.h>
#include <stdlib.h>

//TODO: write a program which asks for two binary numbers.
//write a function, which prints out the sum of the 2 binary numbers.

void binary_adder (char *bin_op_1, char *bin_op_2);

    int sum = atoi(char *bin_op_1) + atoi(char *bin_op_2);

int main()
{

    char a[20];
    char b[20];

    printf("Give me a binary number: ");
    scanf("%s", &a);
    printf("Give me another binary number: ");
    scanf("%s", &b);

    printf (binary_adder(a, b));

    return(0);
}
