#include <stdio.h>
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    //TODO: write a function which finds the maximum occurrence of a character in a given string.
    //return with the most frequent character
    //the number of occurrence should be an output parameter

    char str[] = "e is the most frequent element.";
    char temp;
    int i, j;
    int n  = strlen(str);


    for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (str[i] > str[j]) {
            temp  = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
    }
    printf("%s" , str);
    return 0;
}
