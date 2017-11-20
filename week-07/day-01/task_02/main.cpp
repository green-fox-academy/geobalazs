#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw a char in the try block
// Catch it in the catch block and write it out.

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    try{
        if(b == 0)
            throw 'Z';

        c = a / b;
        cout << c << endl;
    }

    catch(char err){
        cout << err << endl;
    }

	return 0;
}
