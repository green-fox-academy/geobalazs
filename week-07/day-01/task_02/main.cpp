#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw a char in the try block
// Catch it in the catch block and write it out.

int main() {

    try{

        throw "an exception were thrown";

    }

    catch(const char *err){
        cout << err << endl;
    }

	return 0;
}
