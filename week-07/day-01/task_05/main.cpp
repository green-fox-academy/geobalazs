#include <iostream>
using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void ErrorFuncThrowInt(){
    throw 'Z';
}

int main() {

    int a = 10;
    int b = 0;

    try{
        if (b == 0)
            ErrorFuncThrowInt();

        cout << a / b << endl;
    }

    catch(char err){
        cout << "You cannot divide by '" << err << "'ero" << endl;
    }
	return 0;
}
