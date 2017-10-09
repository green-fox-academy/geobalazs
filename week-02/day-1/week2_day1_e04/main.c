#include <stdio.h>
#include <stdlib.h>
#include "GFX.h"

// define a variable and assign the value `Greenfox` to it in a .h file
// create a function called `greet` that greets its input parameter
// define more names to greet, call the function multiple times

void greet(name);

int main()
{
    greet("Gergo");
    greet("Adam");
    greet("Zoli");
    greet("Andris");
    return 0;
}
void greet(name){

    printf("Hello %s in %s!\n" , name , GFX );

}
