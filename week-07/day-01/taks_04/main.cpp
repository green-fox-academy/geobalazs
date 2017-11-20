#include <iostream>
using namespace std;

// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void ErrorFuncThrowInt(){
    throw 0;
}

int main() {

    try{
        ErrorFuncThrowInt();
    }

    catch(int xxx){
        cout << "You cannot divide by: " <<xxx << endl;
    }
	return 0;
}
