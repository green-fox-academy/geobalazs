#include <iostream>
#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

    try {

        throw 33;

    }

    catch(int xxx){
        cout << "This number were thrown from the try: " << xxx << endl;
    }

	return 0;
}
