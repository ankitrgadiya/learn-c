#include <stdio.h>

int main (void)
{
	const int n = 150;
	int prime[n], i, j;

	for (i = 2; i < n; i++)
	{
		prime[i] = 0;
	}

	for (i = 2; i < n; i++)
	{
		if (prime[i] == 0)
		{
			printf("%i ", i);
		}
		else
		{
			continue;
		}
		
		for (j = 0; i * j <= n; j++)
		{
			prime[i * j] = 1;
		}
	}

	printf("\n");

	return 0;
}
