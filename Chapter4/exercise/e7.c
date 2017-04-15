#include <stdio.h>

int main (void)
{
	// declare variable
	float result;

	// calculation
	result = ((3.31e-8) * (2.01e-7)) / ((7.16e-6) + (2.01e-8));

	// print the result
	printf("The result is %e\n", result);

	return 0;
}
