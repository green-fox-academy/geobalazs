#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int index_number = 0;
    vector <int> fibVect;
    //int fib[index_number];
    int i = 0;
    fibVect.push_back(1);
    fibVect.push_back(1);

    cout << "Please give a number till you want to see to Fibonacci sequence: " << endl << endl;
    cin >> index_number;

    for(i = 2 ; i <= index_number ; ++i){
        int fib_num = fibVect[i - 1] + fibVect[i - 2];
        fibVect.push_back(fib_num);
    }
    cout << endl << "The Fibonacci sequence: " << endl;
    for (i = 0 ; i < index_number ; ++i){
        cout << fibVect[i] << "  ";
    }

    return 0;
}
