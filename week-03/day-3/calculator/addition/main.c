#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b){

    int result = 0;
    result = a+b;
    return result;

}

int main()
{
    int n1 = 0;
    int n2 = 0;
    int sum = 0;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addition(n1, n2);

    printf("sum = %d",sum);

    return 0;
}
