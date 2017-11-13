#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print all elements of it

	vector<int> numbers;

    numbers.push_back(4);
    numbers.push_back(3);
    numbers.push_back(6);
    numbers.push_back(12);
    numbers.push_back(5);

    unsigned int i = 0;

    for( i = 0 ; i < numbers.size() ; i++){

        cout << numbers[i] << "||";

    }

  return 0;
}
