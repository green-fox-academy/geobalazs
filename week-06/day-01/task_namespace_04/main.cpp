#include <iostream>

using namespace std;

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//

namespace Mark {
    string name1 = "Mark";
    int age_1 = 20;
    int fav_num_1 = 45;
}

// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
namespace Maria {
    string name2 = "Maria";
    int age_2 = 15;
    int fav_num_2 = 90;
}
// create a function that can add the two age, and returns it

int add_func(int num1 , int num2){

    return num1 + num2;
}
    using namespace Mark;
    using namespace Maria;
int main()
{

    cout << add_func (age_1 , age_2);

    return 0;
}
