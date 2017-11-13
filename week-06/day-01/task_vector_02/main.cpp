#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10
    vector<int> numbers;
    int vector_size = 10;
    int i = 0;
    srand((int)time(0));

    for( i=0 ; i < vector_size ; i++){

        int rand_num = (rand() % 100) + 1;
        numbers.push_back(rand_num);
        cout << numbers[i] << "||";

    }
    cout << endl;
    for( i=0 ; i < vector_size ; i++){

        int rand_num = (rand() % 100) + 1;
        numbers.push_back(rand_num);
        cout << numbers[i] << "||";

    }

  return 0;
}
