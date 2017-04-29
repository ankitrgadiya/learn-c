#include <stdio.h>

int arraySum (int values[], int n);

int main (void)
{
	int result;
	int sampleArray [4] = {1, 8, 19, 31};

	result = arraySum (sampleArray, 4);

	printf("The sum is %i\n", result);

	return 0;
}

int arraySum (int values[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += values[i];
	}

	return sum;
}
