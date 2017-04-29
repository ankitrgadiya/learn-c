#include <stdio.h>

int sampleArray [4] = {1, 8, 19, 31};
int n = 4;

int arraySum (void);

int main (void)
{
	int result;

	result = arraySum ();

	printf("The sum is %i\n", result);

	return 0;
}

int arraySum (void)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += sampleArray[i];
	}

	return sum;
}
