#include <stdio.h>
#include <stdlib.h>

/*
Create a function that takes an array of float and returns the second biggest element from it
*/

float big_float_searcher(float _array[] , int _size);

int main()
{
    float array[] = {3.2 , 20.5 , 4.5 , 99.5 , 100.45 , 11.45 , 40.5, 20.56 , 5.5 , 10.5 , 30.5 ,10.2};

    int array_size = sizeof(array) / sizeof(float);

    printf( "%f", big_float_searcher(array , array_size));

    return 0;
}

float big_float_searcher(float _array[] , int _size){
    int i = 0;
    int j = 0;

    float biggest_float = 0;
    float second_biggest_float_num = 0;
    float difference1 = 0;
    float difference2 = 0;

    while( i <= _size){
        if ( biggest_float == 0){
            if ( _array [i] < _array [i + 1] ){
            biggest_float = _array[i + 1];
            }
        }
        if (biggest_float != 0){
            if ( biggest_float < _array [i + 1] ){
            biggest_float = _array[i+1];
            }
        }
        ++i;
    }

    while(j <= _size){

        if (biggest_float - _array[j] != 0 ){
            difference1 = biggest_float - _array[j];
            difference2 = biggest_float - _array[j + 1];
           if (difference1 < difference2 && _array[j] > second_biggest_float_num){
                second_biggest_float_num = _array[j];
           } else if (_array[j + 1] > second_biggest_float_num){
                second_biggest_float_num = _array[j + 1];
           }
        }
        j = j + 2;
    }

    return second_biggest_float_num;
}
