#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void jusuphus(int num_soldiers);
int jusuphuspow2(int num_soldiers);

int main()
{

    int soldiers = 0;
    char enter =0;
    printf("Hello you are in the hell circle, but give a number and if you pay attention you will survive:\n");
    scanf("%d" , &soldiers);
    printf("Your number is: ");
    jusuphus(soldiers);
    printf("Press enter to see, how can you escape from hell\n");
    getchar();
    scanf("%c" , &enter);

}

int jusuphuspow2(num_soldiers){

   for (int i = 1 ; i < (num_soldiers/2) ; i++)
    if (num_soldiers == pow(2 , i)){
     break;
    }
        return 1;
}

void jusuphus(int num_soldiers){
    printf("\t%d\n" , num_soldiers);
}
