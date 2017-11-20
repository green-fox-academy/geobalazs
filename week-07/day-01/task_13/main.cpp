#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

// Create a simple program which has a time lock
// The program should ask for a user input, but the user only has
// 10 seconds to reply, if the user falis (reaches the time limit)
// the program should print out: "faild, it took you too much time"
// This program cloud be the engine of a quiz game.

void user_input(){

    int i = 0;
    int number =0;
    vector <int> NumberVector;

    cout << "You have 10 sec to give 10 number:" << endl;
    for (i = 0 ; i < 5 ; ++i ){
    cin >> number;
    NumberVector.push_back(number);
    }
}

int main() {

    user_input();
    sleep(1000);
    system (cls);
}
