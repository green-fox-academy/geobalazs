#include <iostream>
#include <string>
#include <vector>


using namespace std;



//create an integer vector with the size of 5 and print the 3rd element of it



int main() {

    vector<int> number;

    number.push_back(3);
    number.push_back(5);
    number.push_back(18);
    number.push_back(333);
    number.push_back(45);

    cout << "The value at the 3rd index of number vector: " << number.at(2);


  return 0;

}
