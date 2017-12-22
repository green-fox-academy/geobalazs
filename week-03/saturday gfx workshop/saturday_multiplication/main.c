#include <stdio.h>

void multiplication_table(int num){

for(int i=1 ; i <= 10 ; i++){

    printf("%d * %d = %d\n" , i , num , i * num);

    }
}

int main() {

    int base = 0;

    printf("Hello, I am a multiplication C program.\n"\
                        "Type your base number here:\t");

    scanf("%d" , &base);

    if (base >= 0)

        multiplication_table(base);

     else

        printf("Error!");

  return 0;
}
