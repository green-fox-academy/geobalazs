#include <iostream>
#include <stdexcept>

using namespace std;
//Try to run the following code!

int main () {

    int int_array[5] = {1, 2, 3, 4, 5};
    cout << sizeof(int_array) / sizeof(int_array[0]);
    int index = 200;

    try{
        if (index > 4)
            throw runtime_error("Your array do not have index: ");

        cout << int_array[index];
    }
    catch(runtime_error &err){
        cout << err.what() << index << endl;
    }

    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!
