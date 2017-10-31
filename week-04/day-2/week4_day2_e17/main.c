#include <stdio.h>
#define MAX_CHARS 255 // Maximum characters allowed

 char frequency(char *array , int *max_occurence){

    char temp;
    int i, j;
    int str_length  = strlen(array);
    int occurence = 1;
    *max_occurence = 0;
    char freq_char;

    for (i = 0; i < str_length-1; i++) {
      for (j = i+1; j < str_length; j++) {
         if (array[i] > array[j]) {
            temp  = array[i];
            array[i] = array[j];
            array[j] = temp;
         }
      }
    }
    printf("%s\n\n" , array);

    for( i = 0 ; i < str_length ; i++){

        if(array[i] != array[i + 1]){

           if(occurence > *max_occurence){
            *max_occurence = occurence;
            freq_char = array[i];
           }
           occurence = 1;
        }

        if( array[i] == array[i + 1]){
            occurence++;
            printf("%d  %c\n" , occurence , array[i]);

        }
    }
    printf("-%d- , %c" , *max_occurence , freq_char);

    return freq_char;
}

int main()
{
    //TODO: write a function which finds the maximum occurrence of a character in a given string.
    //return with the most frequent character
    //the number of occurrence should be an output parameter

    char str[] = "e is the most frequent element.";
    int occurence_number = 0;

    char ferq_letter = frequency(str , &occurence_number);

    printf("\nThe most freq char: %c , its occurence: %d\n" , ferq_letter , occurence_number);

//    printf("\n\n%d" , actual_length);



    return 0;
}
