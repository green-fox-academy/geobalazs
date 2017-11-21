#include <iostream>
using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.

string string_func(string a , string b){

    return a + b;
}
string string_func(string a , string b , string c){

    return a + b + c;
}
string string_func(string a , string b , string c , string d){

    return a + b + c + d;
}

int main() {

    cout << string_func("ho" , "virag") << endl;

    cout << string_func("ping" , "pong" , "asztal") << endl;

    cout << string_func("szek" , "es" , "egy" , "haz") << endl;

	return 0;
}
