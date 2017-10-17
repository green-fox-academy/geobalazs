#include <stdio.h>
#include <string.h>
#include <stdint.h>

//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use

unsigned int return485(){

return 485;
}

int main()
{

    int num = (unsigned char)return485();

    //printf("%d\n", return485());
    printf("%d", num);

    return 0;
}
