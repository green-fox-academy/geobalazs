#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char command[5];
    char todo_text[500];
    int priority;
    int id;
}TodoApp;

int counter = 0;

void print_welcome_screen();
void user_todo_parser(char _input[]);
void set_user_input(char _input[]);
void list_task();
void write_to_file();

typedef enum { READY , NOTREADY } CHECKLIST;

char user_input[500];
TodoApp TODO[10];


int main()
{

    //TodoApp array[10] = TODO;
//welcomescreen
    print_welcome_screen();
// first input
//    set_user_input(user_input);


    while(1){
        set_user_input(user_input);

        if (strstr(user_input , "-a") != 0){
            user_todo_parser(user_input);

        } else if (strstr(user_input , "-l") != 0){
            list_task();

        } else if (strstr(user_input , "-wr") != 0){
            write_to_file();

        } else {
            break;
        }
     }
    return 0;
}

void write_to_file(){
    FILE *fp;
    int i = 0;
    fp = fopen("todo.txt", "w+");

    if(fp == NULL){
        return -1;
    }

    fprintf(fp ,
        "List by number\n"
        "====================\n"
        "Num | Priority | Tasks\n"
    );
    while(i < counter){
        fprintf(fp , "%d, %d, %s", TODO[i].id + 1, TODO[i].priority, TODO[i].todo_text);
        i++;
    }

    fclose(fp);
}

void list_task(){
    //TodoApp todo;
    int i = 0;
    printf(
    "List by number\n"
    "====================\n"
    "Num | Priority | Tasks\n"
    );
    for ( i ; i < counter ; ++i){
        printf("%d, %d, %s", TODO[i].id + 1, TODO[i].priority, TODO[i].todo_text);
    }
}

void user_todo_parser(char _input[]){
    int i = 0;
    int j = 0;
    char input_temp[70];
    strcpy(input_temp, _input);
    char temp[500];
    char *token;

    //TodoApp todo;

    int _input_size = strlen(input_temp);

    while(input_temp[i] != ' '){
        ++i;
    }

    token = strtok(input_temp , " ");
    strcpy(TODO[counter].command, token);

    TODO[counter].id = counter;

    int todo_length = _input_size - i;
    while(i <= todo_length){
        temp[j] = input_temp[i+1];
        ++j;
        ++i;
    }
    //temp[j] = '\0';

    strcpy(TODO[counter].todo_text, temp);

    counter++;
    //printf("command: %s, todo: %s, id: %d\n" , TODO.command , TODO.todo_text, counter);

}

void set_user_input(char _input[]){

    char ch;
    int i = 0;

    printf("Type here your command: ");

    while(ch != '\n'){
        ch = getchar();
        _input[i] = ch;
        ++i;
    }
    //_input[i] = '\0';
}

void print_welcome_screen(){
    printf(
    "Todo application\n"
    "====================\n"
    "Commands:\n"
    " -a   Adds a new task\n"
    " -wr  Write current todos to file\n"
    " -rd  Read todos from a file\n"
    " -l   Lists all the tasks\n"
    " -e   Empty the list\n"
    " -rm   Removes a task\n"
    " -c   Completes a task\n"
    " -p   Add priority to a task\n"
    " -lp  Lists all the tasks by priority\n\n\n"
    );
}
