#include <stdio.h>
#include <stdlib.h>

/*
write a simple program which can help you decide is it hot enough to turn on the AC or not
for example if temperature 20 or less the output is :
it is too cold for the AC
or, the temperature is between 21-24:
it is up to you to turn on the AC
...
*/

int main()
{
    int temperature = 3;

    if (temperature <= 20 )

        printf("it is too cold for the AC");
    else if ( (temperature > 24) || (temperature < 30))
        printf("you should turn on the AC");
     else if ( (temperature > 21) || (temperature < 24))
        printf("it is up to you to turn on the AC");
     else
        printf("it is too hot for the AC turn off");


    return 0;
}
