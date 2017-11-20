#include <iostream>
#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

    int a = 0;
    int b = 0;
    int c =0;

    try {
        if (b == 0)
            throw 0;

        c = a / b;
        cout << c << endl;
    }
    catch(int xxx){
        cout << "You cannot divede by: " << xxx << endl;
    }

	return 0;
}
