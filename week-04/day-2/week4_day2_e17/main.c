#include <stdio.h>
#define MAX_CHARS 255 // Maximum characters allowed

//char frequency(char *array, int max_occurence){

//    return ;
//}

int main()
{
    //TODO: write a function which finds the maximum occurrence of a character in a given string.
    //return with the most frequent character
    //the number of occurrence should be an output parameter

    char str[] = "e is the most frequent element.";
    char temp;
    int i, j;
    int str_length  = strlen(str);
    int occurence = 1;
    int max_occurence = 0;
    char freq_char[1];
    //printf("%c" , freq_char[0]);

    for (i = 0; i < str_length-1; i++) {
      for (j = i+1; j < str_length; j++) {
         if (str[i] > str[j]) {
            temp  = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
    }
    printf("%s\n\n" , str);

    for( i = 0 ; i < str_length ; i++){

        if(str[i] != str[i + 1]){

           if(occurence > max_occurence){
            max_occurence = occurence;
            freq_char[0] = str[i];
           }
           occurence = 1;
        }

        if( str[i] == str[i + 1]){
            occurence++;
            printf("%d  %c\n" , occurence , str[i]);

            //if (str[i] != str[i + 1] && actual_length > most_length){
                   // most_length = actual_length;
               // }
        }
    }
    printf("-%d- , %c" , max_occurence , freq_char[0]);
//    printf("\n\n%d" , actual_length);



    return 0;
}
