#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input

    //TODO:
    // Get the user's name with scanf
    printf("Please type here your name: ");
    scanf("%s",buffer);
    //TODO:
    // Print it out with printf
    printf("%s",buffer);
    return 0;
}
