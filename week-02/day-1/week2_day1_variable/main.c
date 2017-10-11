#include <stdio.h>

/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on the given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/
int counter = 0;

int ask(){
    return 1;
}
void math1(){
    counter++;
    int num1 = ask() + 1;
    printf("math1 = %d\n" , num1);
    return;
}
void math2(){
    counter++;
    int num1 = ask() - 1;
    printf("math2 = %d\n" , num1);

}
void math3(){
    counter++;
    int num1 = ask() * 10;
    printf("math3 = %d\n" , num1);

}
void math4(){
    counter++;
    int num1 = ask() / 0.5;
    printf("math4 = %d\n" , num1);

}
int math5(){
    counter++;
    int num1 = 3 * (ask() + 10);
    printf("math5 = %d\n" , num1);

}

int main()
    {
    ask();
    math1();
    math2();
    math3();
    math4();
    math5();

    printf("You had %d operations", counter);
        return 0;
    }
