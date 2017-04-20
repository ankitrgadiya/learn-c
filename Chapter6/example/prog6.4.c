// Program to determine if a number is even or odd (Ver. 2)

#include <stdio.h>

int main (void)
{
	int num, remainder;

	printf("Enter the number to be tested: ");
	scanf("%i", &num);

	remainder = num % 2;

	if (remainder == 0)
	{
		printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}

	return 0;
}
