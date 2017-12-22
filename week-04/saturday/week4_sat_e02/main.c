#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);

int main()
{

    int num1 = 0;
    int num2 = 0;

    printf("Feed me with two integer diveded by space, then press enter:\t");
    //get two number with scanf
    scanf("%d %d" , &num1 , &num2);
    //calculate their sum with the function
    printf ( "%d" , sum(num1 , num2));
    return 0;
}

int sum(int a,int b)
{
    //it should return with the sum
    return a + b;
}
