#include <iostream>
using namespace std;

// Create a Class named Integer. It should have one int member variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the member variable of this.
//
// Try them out. Write code that demonstrates how they work.

class Integer{
    private:
        int a;
    public:
        Integer (int a) : a(a){ }
        Integer& my_add (Integer& num){
            this->a += num.a;
            return *this;
        }
        int get(){
            return a;
        }

};


int main() {

    Integer io(21);


    cout << io.get();

	return 0;
}
