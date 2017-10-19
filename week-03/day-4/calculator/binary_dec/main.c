#include <stdio.h>
#include <math.h>

int binary_decimal_converter(long long a){

    int decimal_num = 0;
    int i = 0;
    int remainder = 0;

    while (a!=0)
    {
        remainder = a%10;
        a /= 10;
        decimal_num += remainder*pow(2,i);
        ++i;
    }
    return decimal_num;
}

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, binary_decimal_converter(n));
    return 0;
}

