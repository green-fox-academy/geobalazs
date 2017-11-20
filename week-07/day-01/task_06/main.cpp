#include <iostream>
#include <stdexcept>

using namespace std;

void ErrorFuncThrowBuiltInExcept(){
    throw runtime_error("You cannot divide by Zero!");
}

int main() {

    int a = 10;
    int b = 0;

    try{
        if (b == 0)
            ErrorFuncThrowBuiltInExcept();

        cout << a / b << endl;
    }

    catch(runtime_error &err){
        cout << err.what() << endl;
    }
	return 0;
}
