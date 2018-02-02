#include <stdio.h>
#include <stdlib.h>

/*
Create a function that takes an array of float and returns the second biggest element from it
*/
float big_float_searcher(float _array[]);

int main()
{
    float array[] = {3.2 , 20.5 , 4.5, 11.45 , 5.5 , 10.5};

    printf( "%f", big_float_searcher(array));

    return 0;
}

float big_float_searcher(float _array[]){
    int i = 0;
    int j = 0;
    //int array_size = sizeof(_array)/sizeof(_array[0]);

//    printf("array size: %d\n\n" , array_size);

    float second_biggest_float_num = 0;

    while( j <= 6){
        if ( _array [j] > _array [i + 1] ){
            second_biggest_float_num = _array[j];
            ++i;
        } else{
            ++j;
        }
    }

    return second_biggest_float_num;
}
