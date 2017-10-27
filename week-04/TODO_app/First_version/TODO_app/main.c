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
    //const char command [] = "-a -wr -rd -l -e -rm -c -p -lp";
    char command_input[5];
    int8_t command_finder = 0;
    readfcknmanual();

    user_input(command_input);

    if (command_finder == 1)
        command_finder = 0;
        while ( command_finder = 1 ){

            if (strstr( NEW_TASK , command_input ) != NULL){

                command_finder++;
                //fv hivas
            } else if (strstr(WRITE_TODOS , command_input) != NULL){
                command_finder++;

            } else if (strstr(LIST_BY_PRIO , command_input) != NULL){
                command_finder++;

            } else if (strstr(READ_TODOS , command_input) != NULL){
                command_finder++;

            } else if (strstr(LIST_TASK , command_input) != NULL){
                command_finder++;

            } else if (strstr(EMPTY_LIST , command_input) != NULL){
                command_finder++;

            } else if (strstr(REMOVE_TASK , command_input) != NULL){
                command_finder++;

            } else if (strstr(COMPLETE_TASK , command_input) != NULL){
                command_finder++;

            } else if (strstr(ADD_PRIO , command_input) != NULL){
                command_finder++;

            }

}
