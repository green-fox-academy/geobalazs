#include <stdio.h>
#include <stdlib.h>

void jusuphus(int num_soldiers);

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

void jusuphus(int num_soldiers){
    printf("\t%d\n" , num_soldiers);
}
