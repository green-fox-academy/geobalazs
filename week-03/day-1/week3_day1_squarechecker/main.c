#include <stdio.h>
#include <math.h>

// This program should work correctly with the following input: 20, 400

int main()
{
	int number, result;
	printf("Please enter a number: ");
	fflush(stdin);
	scanf("%d", &number);

	printf("Please enter the square of that number: ");
	fflush(stdin);
	scanf("%d", &result);

	printf("%d\n", number);
    printf("%d\n",pow(number, 2));
    printf("%d\n", result);

	if (pow(number, 2) == result)
		printf(":)\n");
	else
		printf(":(\n");

	return 0;
}
