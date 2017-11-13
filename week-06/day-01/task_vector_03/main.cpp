#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    vector<int> number(20);
    unsigned int i = 0;

    srand((int)time(0));

    for( i = 0 ; i < number.size() ; i++ ){
        int rand_num = (rand() % 10) + 1;
        number[i] = rand_num;
        cout << number[i] << "||";

    }

	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
  //remove the even numbers, then print the items again

  return 0;
}
