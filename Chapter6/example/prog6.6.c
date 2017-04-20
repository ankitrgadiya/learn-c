// Program to implement a sign function

#include <stdio.h>

int main (void)
{
	int number, sign;

	printf("Please type in a number: ");
	scanf("%i", &number);

	if (number < 0)
	{
		sign = -1;
	}
	else if (number > 0)
	{
		sign = 1;
	}
	else
	{
		sign = 0;
	}

	printf("Sign = %i\n", sign);

	return 0;
}
