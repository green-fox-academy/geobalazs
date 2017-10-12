#include <stdio.h>
#include <stdlib.h>

int guess_number(){

    int range_min = 0;
    int range_max = 100;

    int guess = 0;
    //int guess2 = 0;
    //int guess3 = 0;

    //printf("Give your range from 0 - 100\n");
    //scanf("%d" , &range_min);
    //scanf("%d" , &range_max);

    int rand_num = rand() % 100;

    int i = 0;
    int j = 3;

    printf("%d" , rand_num);

    do{
        printf("You have %d try!\nGive your guess:" , j);
        scanf("%d" , &guess);
        i++;
        j--;
    }while(i <= 2);
      if (rand_num == guess){
        break;
      } printf("Try again!");

    printf("You win!");


    /*if(rand_num == guess1){
        printf("You win!");
    } else if( rand_num == guess2){
        printf("Give your guess:");
        scanf("%d" , &guess2);
    } {
        printf("You win!");
    }

    printf("Give your guess:");
    scanf("%d" , &guess3);

    if( rand_num == guess3){
        printf("You win!");
    }
    printf("Try again!");*/

return 0;
}
int main()
{

    guess_number();

return ;
}
