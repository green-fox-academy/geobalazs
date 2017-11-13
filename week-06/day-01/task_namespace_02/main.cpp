#include <iostream>
using namespace std;

namespace PERSON {
    string name = "geobalazs";
    int age = 33;
    int fav_num = 3;
}

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

int main()
{
    using namespace PERSON;

    cout << "My name: " << name << endl;
    cout << "My age: "<< age << endl;
    cout << "My favorite number: "<< fav_num << endl;

    return 0;
}
