#include <stdio.h>

void reverse_name(char *name, char *reversed_name){

	int counter = 0;
    int i = 0;
    int j = 0;

	for( i = 0 ; name[i] != 'J' ; i++ ){
           // printf( "%c" , name[i]);
            counter ++;
        }
    //printf("%d" , counter);
    for ( i = 0 , j = counter ; name[j] != '\0'; j++ , i++) {
            reversed_name[i] = name[j];
//            printf( "%c" , reversed_name[i]);
    }
    reversed_name[counter-1] = ' ';
//    printf("%d" , counter);
    for( i = 0 ; name[i] != ' ' ; i++ ){
            reversed_name[counter + i] = name[i];
//            printf( "%c" , reversed_name[counter + i]);
    }
    reversed_name[counter + i] = '\0';
    for(i = 0 ; reversed_name[i] != '\0'; i++){
            printf( "%c" , reversed_name[i]);
    }


}

int main(void)
{
	char NAME[] = "Gipsz Jakab";
    char REVERSED_NAME[50];

    reverse_name(NAME , REVERSED_NAME);

    //write a function which reverse a name's last name and first name. Use a void function. Put your 'return' value in the second parameter.

}
