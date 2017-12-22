#include <stdio.h>

int main()
{
    int i, j=0;
    char c;
    printf("give a number");
    scanf("%d ", &i);
    while((c=getchar())!='\n')
        printf("%d: %c\n", j++, c);
    return 0;
}
