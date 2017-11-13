#include <iostream>
using namespace std;

namespace PERSON {
    string name = "geobalazs";
    int age = 33;
    int fav_num = 3;
}

// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born
int calc_born_year(int num){
        int year = 2017;
    return year - num;
}


int main()
{
    using namespace PERSON;

    cout << calc_born_year(age);

    return 0;
}
