#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a ponter.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*

class ParentClass{
    public:
        virtual string virtual_string_func(){
            return "trie";
        }
        string non_virtual_string_func(){
            return "bye";
        }

};

class ChildClass: public ParentClass{
    public:
    string virtual_string_func(){
        return "die";
    }
    string non_virtual_string_func(){
        return "lie";
    }

};

int main ()
{
    ParentClass pc;
    ChildClass cc;
    ParentClass *a = &cc;

    cout << pc.non_virtual_string_func();
    cout << cc.virtual_string_func();

    return 0;
}
