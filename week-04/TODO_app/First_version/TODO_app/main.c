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
    char command_input[256];
    int command_finder = 0;
    readfcknmanual();

    user_input(command_input);

        while ( command_finder = 1 ){

            if (strstr(NEW_TASK , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } /*else if (strstr(WRITE_TODOS , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } else if (strstr(LIST_BY_PRIO , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } else if (strstr(READ_TODOS , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } else if (strstr(LIST_TASK , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } else if (strstr(EMPTY_LIST , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } else if (strstr(REMOVE_TASK , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } else if (strstr(COMPLETE_TASK , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            } else if (strstr(ADD_PRIO , command_input) != NULL){
                command_finder++;
                printf("hello world");
                break;
            }*/ else {
                printf("bad boy");
                break;
            }
        }


}
