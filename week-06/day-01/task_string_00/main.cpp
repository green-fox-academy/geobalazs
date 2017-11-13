#include <iostream>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{
    string name = "Balazs";
    int age = 33;
    bool caffe = true;
    string true_false = "";

    if(caffe){
        true_false = "true";
    } else {
        true_false = "false";
    }

    cout << "My name: " << name << endl;
    cout << "My age: "<< age << endl;
    cout << "I like caffe: " << true_false << endl;

    return 0;
}
