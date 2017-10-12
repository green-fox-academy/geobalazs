#include <stdio.h>
#include <stdlib.h>

int guess_number(){

    int range_min = 0;
    int range_max = 100;

    int guess1 = 0;
    int guess2 = 0;
    int guess3 = 0;

    printf("Give your range from 0 - 100\n");
    scanf("%d" , &range_min);
    scanf("%d" , &range_max);

    int rand_num = rand() % 100;

    printf("%d" , rand_num);

    printf("Give your guess:");
    scanf("%d" , &guess1);

    if(rand_num == guess1){
        printf("You win!");
    break;
    }

    printf("Give your guess:");
    scanf("%d" , &guess2);

    if( rand_num == guess2){
        printf("You win!");
    break;
    }

    printf("Give your guess:");
    scanf("%d" , &guess3);

    if( rand_num == guess3){
        printf("You win!");
    break;
    }
    printf("Try again!");

return 0;
}
int main()
{

    guess_number();

return ;
}
