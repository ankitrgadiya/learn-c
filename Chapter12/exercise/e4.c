// Program to illustrate rotation of integers
// Ver. 2 Size independent

#include <stdio.h>

int main (void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);

	printf("%x\n", rotate (w1, 8));
	printf("%x\n", rotate (w1, -16));
	printf("%x\n", rotate (w2, 4));
	printf("%x\n", rotate (w2, -2));
	printf("%x\n", rotate (w1, 0));
	printf("%x\n", rotate (w1, 44));

	return 0;
}

// Function to rotate an unsigned int left or right

unsigned int rotate (unsigned int value, int n)
{
	int int_size (void);
	unsigned int result, bits;
	int size = int_size();

	// scale down the shift count to a defined range
	if (n > 0)
		n = n % size;
	else
		n = -(-n % size);

	if (n == 0) {
		result = value;
	} else if ( n > 0) {
		bits = value >> (size - n);
		result = value << n | bits;
	} else {
		n = -n;
		bits = value << (size - n);
		result = value >> n | bits;
	}

	return result;
}

int int_size (void)
{
	int num = ~0, counter = 0;
	
	while (num != 0) {
		num <<= 1;
		counter++;
	}

	return counter;
}
