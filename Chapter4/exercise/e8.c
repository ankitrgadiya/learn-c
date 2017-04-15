#include <stdio.h>

int main(void)
{

	// declare variable
	int i, j, next_multiple;

	// Case 1
	i = 365;
	j = 7;

	// calculation
	next_multiple = (i + j) - (i % j);
		
	// print result
	printf("i = %i; j = %i; Next_multiple = %i\n", i, j, next_multiple);

	// Case 2
	i = 12258;
	j = 23;

	// calculation
	next_multiple = (i + j) - (i % j);
		
	// print result
	printf("i = %i; j = %i; Next_multiple = %i\n", i, j, next_multiple);

	// Case 3
	i = 996;
	j = 4;

	// calculation
	next_multiple = (i + j) - (i % j);
		
	// print result
	printf("i = %i; j = %i; Next_multiple = %i\n", i, j, next_multiple);

	return 0;
}
