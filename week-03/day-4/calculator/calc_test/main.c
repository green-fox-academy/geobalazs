#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operation.h"


int main()
{

    char equation[256];
    float num1 = 0;
    char  *operat = 0;
    float num2 = 0;
    const char s[] = " ";

    gets(equation);

    num1 = atof(strtok(equation , s));
    operat = strtok(NULL , s);
    num2 = atof(strtok(NULL , s));

    printf("%f %s %f = %f" , num1 ,  operat , num2 , addition(num1 , num2));

    return 0;
}
