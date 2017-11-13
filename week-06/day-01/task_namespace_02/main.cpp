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
    cout << "My name: " << PERSON :: name << endl;
    cout << "My age: "<< PERSON :: age << endl;
    cout << "My favorite number: "<< PERSON :: fav_num << endl;

    return 0;
}
