#include <stdio.h>

int n = 13, m = 12;

int prime (void);

int main (void)
{
	if (prime () == 1)
		printf("The 13 is prime.\n");
	else
		printf("The 13 is not prime.\n");

	return 0;
}

int prime (void)
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
