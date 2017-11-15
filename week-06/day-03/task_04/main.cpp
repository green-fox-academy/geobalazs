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
            return "try ";
        }
        string non_virtual_string_func(){
            return "bye";
        }

};

class ChildClass: public ParentClass{
    public:
    string virtual_string_func(){
        return "die ";
    }
    string non_virtual_string_func(){
        return "lie ";
    }

};

int main ()
{
    ParentClass pc;
    //ChildClass cc;
    //ParentClass *a = &cc;
    ParentClass* a = new ChildClass();
    //cout << pc.non_virtual_string_func();
    //cout << cc.virtual_string_func();
    //cout << a -> non_virtual_string_func() << endl << a -> virtual_string_func() << endl;
    //cout << ((ChildClass*)a) -> non_virtual_string_func() << endl << ((ChildClass*)a) -> virtual_string_func() << endl;

    //This should print out try lie or die and bye
    cout << pc.virtual_string_func() << ((ChildClass*)a) -> non_virtual_string_func() << "or " << a ->virtual_string_func() << "and "<< a -> non_virtual_string_func();

    return 0;
}
