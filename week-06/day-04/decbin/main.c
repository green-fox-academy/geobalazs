#include <stdio.h>
#include <math.h>

long long bindec(int num){

    long long binaryNumber = 0;
    int remainder;
    int i = 1;
    int step = 1;

    while (num!=0)
    {
        remainder = num%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, num, remainder, num/2);
        num /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }

   return binaryNumber;
}

int main()
{
    int n = 33;

    printf("%d in decimal = %lld in binary", n, bindec(n));

    return 0;
}
