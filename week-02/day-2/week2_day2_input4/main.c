#include <stdio.h>
#include <string.h>

int num = 0;
char name[100];
void func();

int main()
{
    //write a void function which asks for a number with scanf and print it out with printf,
    //then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem

    func();

    return 0;
}

void func(){
        printf("Please type a number:\n");
        scanf("%d" , &num);
        printf("Your number is: %d\n" , num);
        printf("Please type Your name:\n");
        gets(name);
        puts(name);
}
