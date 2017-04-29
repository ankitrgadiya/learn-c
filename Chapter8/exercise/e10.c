#include <stdio.h>

int prime (int n);

int main (void)
{
	int number;

	printf("Enter the number to check: ");
	scanf("%i", &number);

	if (prime (number) == 1)
		printf("The number is prime.\n");
	else
		printf("The number is not prime.\n");

	return 0;
}

int prime (int n)
{
	if (n == 2)
	{
		return 1;
	}
	else if (n % 2 == 0)
		return 0;
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
				return 0;
		}
	}

	return 1;
}
