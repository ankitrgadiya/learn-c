// Program to calculate the absolute value of integer

#include <stdio.h>

int main (void)
{
	int number;

	printf("Type in the number: ");
	scanf("%i", &number);

	if (number < 0)
	{
		number = -number;
	}

	printf("The absolute value is %i\n.", number);

	return 0;
}
