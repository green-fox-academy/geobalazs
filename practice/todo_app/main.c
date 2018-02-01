#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct TodoApp {
    char todo_text[500];
    int todo_id;
    int priority;

}TodoApp;

void print_welcome_screen();

void user_todo_parser(char _input[500] , char * _command , TodoApp * _todo_text);

void set_user_input(char _input[500]);

//typedef enum check






int main()
{
    print_welcome_screen();
    TodoApp TODO;

    char user_input[500] = "-a feed the dog";
    char command;

    //set_user_input(user_input);
    user_todo_parser(user_input , &command , &TODO);

    //printf("command: %s, todo: %s \n" , command , TODO.todo_text);
    //printf("userinput: %s\n\n" , user_input);


    //printf("userinput: %s\n\n" , user_input);
    //printf("\n\n Text by user: %s" , get_user_input());

   // strcpy(TODO.todo_text , "feed the dog");
   // printf("%s\n" , TODO.todo_text);

    return 0;
}

void user_todo_parser(char _input[500] , char * _command , TodoApp * _todo_text){
    int i = 0;
    int j = 0;
    int _input_size = strlen(_input);

    while(_input[i] != ' '){
        ++i;
    }

    _command = strtok(_input , " ");

    int todo_length = _input_size - i;
    while(i <= todo_length){
        _todo_text[j] = _input[i+1];
        ++j;
        ++i;
    }
    _todo_text[j] = '\0';

}

void set_user_input(char _input[500]){

    char ch;
    int i = 0;

    printf("Type here your command: ");

    while(ch != '\n'){
        ch = getchar();
        _input[i] = ch;
        ++i;
    }
    _input[i] = '\0';
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
