#include <iostream>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
    string name = "Balazs Kiss";
    int age = 33;
    double height = 1.75;
    bool married = 0;
    string marriage = "";

    if(married){
        marriage = "married.";
    } else {
        marriage = "not married.";
    }

    cout << "My name: " << name << endl;
    cout << "My age: "<< age << endl;
    cout << "My height: "<< height << endl;
    cout << "I am " << marriage << endl;

    return 0;
}
