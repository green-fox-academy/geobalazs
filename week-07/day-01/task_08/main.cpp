#include <iostream>
#include <stdexcept>
using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

int get_fibonacci_number(int index_number){


    index_number = 11;
    int fib[index_number];
    int i = 0;
    fib[0] = 1;
    fib[1] = 1;

    for(i = 2 ; i <= index_number ; ++i){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[index_number - 1];
}

int main() {

    int fib_num = -11;

    try{
        if(fib_num < 0)
        throw runtime_error("Fibonacci sequence does not have negative index.");

        cout << get_fibonacci_number(fib_num) << endl;
    }
    catch(runtime_error &err){
        cout << err.what() << endl;
    }
	return 0;
}
