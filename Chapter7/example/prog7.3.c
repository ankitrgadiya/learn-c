// Program to generate the first 15 Fibonacci numbers.

#include <stdio.h>

int main (void)
{
	int fibonacci[15], i;

	fibonacci[0] = 0;
	fibonacci[1] = 1;
	
	for (i = 2; i < 15; i++)
	{
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
	}

	for (i= 0; i < 15; i++)
	{
		printf("%i\n", fibonacci[i]);
	}

	return 0;
}

