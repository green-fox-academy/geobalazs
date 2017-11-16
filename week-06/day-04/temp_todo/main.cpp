#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> taskVector;
    string command = "";
    string task = "";

    cin >> command >> task;
    taskVector.push_back(task);
    //cout << command;
    //cout << taskVector[0];
    cout << "add new task" << endl;
    cin >> command >> task;
    taskVector.push_back(task);
    cout << taskVector[0] << taskVector[1];


    return 0;

}
