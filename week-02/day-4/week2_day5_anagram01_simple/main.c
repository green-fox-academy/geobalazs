#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word1[] = "dog";
    char word2[] = "god";
    int anagram = 0;


    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if (word1[i] == word2[j]){
                anagram++ ;
            }
        }
    } if( anagram == 3){
    printf("Anagram? Yes!");
    } else {
    printf("Anagram? No!");
    }
}
