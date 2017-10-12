#include <stdio.h>
#include <stdlib.h>

int main()
{
    int range[100] = {0};

    int range_min = 0;
    int range_max = 0;

    printf("Give your range from 0 - 10\n");
    scanf("%d" , &range_min);
    scanf("%d" , &range_max);

    for(int i = range_min ; i <= range_max ; i++){
        range[i] = i;
        printf("%d\t" , range[i]);
    }

return ;
}
