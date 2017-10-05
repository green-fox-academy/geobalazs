#include <stdio.h>
#include <stdlib.h>

// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".

int main()
{
    int a = 1;
    //char f = "Fizz";
    //char b = "Buzz";
    //char fb = "FizzBuzz";

    /*do{
        printf("%d\n" , a);
        a++
    }while(a <= 100);*/

    for(a=1; a <= 100
    ; a++){
            if (a%3 != 0 && a%5 != 0){
                printf("%d\n" , a);
            } else if (a%3 == 0 && a%5 != 0){
                        printf("Fizz\n");
            } else if (a%3 != 0 && a%5 == 0){
                        printf("Buzz\n");
            } else if (a%3 == 0 && a%5 == 0){
                        printf("FizzBuzz\n");
            }
            /*if (a%3 == 0){
                printf(f);
            } if (a%5 == 0){
                printf(b);
            }
            if (a%3 == 0 && a%5 == 0){
                printf(fb);
            } else {

            }*/
    }

    return 0;
}
