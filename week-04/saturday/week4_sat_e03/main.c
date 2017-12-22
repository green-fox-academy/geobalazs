#include <stdio.h>
#include <stdlib.h>

//write a function which calculate and print!! the factorial (n!) (define N to 5 at first, 5! is 120

int factorio(int number);

int main()
{

    factorio(6);

}

int factorio(int number){

    int result = 1;

    for(int i = 2 ; i <= number ; i++){

       result = result * i;
    }

    printf("%d" , result);
}
