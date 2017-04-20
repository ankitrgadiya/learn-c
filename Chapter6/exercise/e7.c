// Program to generate a table of prime numbers (improved)

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int p, d;
	bool isPrime;

	for (p = 2; p <= 50; p++)
	{
		isPrime = true;

		if (p % 2 == 0 && p > 2)
		{
			continue;
		}

		for (d = 2; d < p && isPrime; d++)
		{
			if (p % d == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime)
		{
			printf("%i ", p);
		}
	}

	printf("\n");
	return 0;
}
