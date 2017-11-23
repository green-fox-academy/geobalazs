#include <iostream>
#include <stdio.h>

using namespace std;

int InputErrorHendling(string text){

        string input[6]= {"h" , "l" , "o" , "e" , "s" , "c"};
        int i = 0;
        int counter = 0;
        text;

    for(int i = 0 ; i < 6 ; ++i){
        if (text == input[i])
            ++counter;
        }
        if (counter == 1){
        counter = 0;
        }

    return counter;
};
void my_print(int number){
    if (number == 1){
        cout <<
    }
}

int main()
{

    string userinput;
    getline(cin , userinput);
    InputErrorHendling(userinput);


    return 0;
}
