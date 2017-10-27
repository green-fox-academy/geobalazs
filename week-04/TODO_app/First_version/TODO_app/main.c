#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "storage.h"
#include "user_interact.h"

#define NEW_TASK "-a"
#define WRITE_TODOS "-wr"
#define READ_TODOS "-rd"
#define LIST_TASK "-l"
#define EMPTY_LIST "-e"
#define REMOVE_TASK "-rm"
#define COMPLETE_TASK "-c"
#define ADD_PRIO "-p"
#define LIST_BY_PRIO "-lp"



int main()
{
    const char command [] = "-a -wr -rd -l -e -rm -c -p -lp";
    char command_input[5];

    readfcknmanual();

    user_input(command_input);

    while (strstr( command , command_input ) != NULL){

       printf("Hello world!");


    }

    //char command_find = strstr( command , command_input );

    /*user_input(command_input);

    if (command_find != NULL){

        printf("Hello world!");
    }else{
        printf("Badboy");
    }*/

}
