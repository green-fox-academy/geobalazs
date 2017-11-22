#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <windows.h>

using namespace std;

// Create a simple program which has a time lock
// The program should ask for a user input, but the user only has
// 10 seconds to reply, if the user falis (reaches the time limit)
// the program should print out: "faild, it took you too much time"
// This program cloud be the engine of a quiz game.



int main() {

    int i = 0;
    int number =0;
    //vector <int> NumberVector;

    for(i = 10 ; i > 0 ; --i){
       cout << i << endl;
       this_thread::sleep_for(chrono::seconds(1));
       system ("cls");
    }
    cout << "boom";
    //try {
    //       if (i <= 0){
    //           throw "Failed, it took you too much time...";

    //           cin >> number;
    //           NumberVector.push_back(number);
    //       }
    //   }
    //   catch (const char *err_msg){
    //       cout << err_msg << endl;
    //   }

    //cout << "You have 5 sec to give 5 number:" << endl;
    //cin >> number;
    //NumberVector.push_back(number);
    //Sleep(5000);
    //cout << i << endl;
    //cout << "Failed, it took you too much time...";

  return 0;
}
