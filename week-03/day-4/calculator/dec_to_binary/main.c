#include <stdio.h>
#include <math.h>

long long decto_binary_converter(int a){

    long long binary_num = 0;
    int remainder;
    int i = 1;
    //int step = 1;

    while (a!=0)
    {
        remainder = a%2;
        //printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, a, remainder, a/2);
        a /= 2;
        binary_num += remainder*i;
        i *= 10;
    }
    return binary_num;
}

int main()
{
    int a;
    printf("Enter a decimal number: ");
    scanf("%d", &a);
    printf("%d in decimal = %lld in binary", a, decto_binary_converter(a));
    return 0;
}

