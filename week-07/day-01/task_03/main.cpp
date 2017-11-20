#include <iostream>
#include <stdexcept>
using namespace std;

// Write a try - catch block.
// Throws a bulit-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {

    int a = 0;
    int b = 0;
    //int c = 0;

    try{
        if (b == 0)
            throw runtime_error("OMG, an exception occured! You cannot divide by Zero!");

        //c = a / b;
        cout << a/b << endl;
    }

    catch(runtime_error &error){
        cout << endl << error.what() << endl;
    }
	return 0;
}
