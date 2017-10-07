#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
create a program which prints out the days from monday to sunday
use a loop and variables to do that
for example:
for(int i = 0; i < 6; i++){
    printf("%d\n", i);\
}
you can match the numbers with the name of the days
write this program first with if and else-if statements
then do it again with switch-statement
take the conclusion:
    - which method was faster?
    - which was shorter?
    - which one did you find easier?
*/

int main()
{
    for(int i = 0; i < 6; i++){
        //printf("%d\n", i);

        if(i == 0){
            printf("Monday\n");
        }else if (i == 1){
            printf("Tuesday\n");
        }else if (i == 2){
            printf("Wendesday\n");
        }else if (i == 3){
            printf("Thursday\n");
        }else if (i == 4){
            printf("Friday\n");
        }else if (i == 5){
            printf("Saturday\n");
        }else {
            printf("Sunday\n");
        }
    }
    return 0;
}
