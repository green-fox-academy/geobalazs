#include <iostream>
#include <vector>

using namespace std;

void add_new_task();

int main()
{

    vector<string> taskVector;
    string command = "";
    string task = "";

    cin >> command;
    if (command == "-a"){
       //cout << command;
       add_new_task();
    }

    //taskVector.push_back(task);
    //cout << command;
    //cout << taskVector[0];
    //cout << taskVector[0] << taskVector[1];


    return 0;

}

void add_new_task(){
    //cout << "hello";
    cin >> task;
    taskVector.push_back(task);
    cout << taskVector[0];
    }

