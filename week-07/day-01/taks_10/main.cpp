#include <iostream>
using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

void even_numbers(int number){

    int i = 0;
    int counter = 0;

    for( i = 0 ; i < number * 2  ; i++ ){
        //cout << ":" << i;
        if( i % 2 == 0 ){
            cout << counter << endl;
            counter += 2;
        }
    }
}

int main() {

    int parameter_number = -5;

    try{
        if (parameter_number < 0)
        throw "Please give a positive number!";

        even_numbers(parameter_number);
    }
    catch (const char *err_text){
        cout << err_text << endl;
    }
  return 0;
}
