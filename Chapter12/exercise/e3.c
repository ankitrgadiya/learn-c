// Program to find out int size.

#include <stdio.h>

int int_size (void)
{
	int num = ~0, counter = 0;
	
	while (num != 0) {
		num <<= 1;
		counter++;
	}

	return counter;
}

int main (void)
{
	printf("Size of int: %i\n", int_size());

	return 0;
}
