#include <stdio.h>
#include <stdlib.h>

int division_with_reminder(int a , int b){

    int result = 0;
    result = a % b;
    return result;

}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    printf("Enters two numbers: ");
    scanf("%d %d" , &num1 , &num2);

    sum = division_with_reminder(num1 , num2);

    printf("sum = %d" , sum);

    return 0;
}
