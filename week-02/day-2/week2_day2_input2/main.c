#include <stdio.h>
#include <conio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    //TODO:
    // Get the user's name with gets
    printf("Please enter Your user name:");
    gets(buffer);
    //TODO:
    // Print it out with puts
    puts(buffer);
    //TODO:
    // Get the user's pet name with getch
    printf("Please enter Your pet's name:");

    int i = 0;
    char ch = getch();
    while (ch != '\r'){
        buffer[i] = ch;
        i++;
        ch = getch();
    }
    buffer[i]=0;
    puts(buffer);
    //TODO:
    // Print it out
    //printf("%c" , buffer);
    return 0;
}
