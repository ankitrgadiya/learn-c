#include <stdio.h>

int main (void)
{
	int bit_test (unsigned int value, int n);
	int bit_set (unsigned int value, int n);
	unsigned int num = 0xabcdefba;
	
	printf("13th bit: %x\n", bit_test (num, 13));

	// Turning it on
	num = bit_set (num, 13);	
	printf("13th bit: %x\n", bit_test (num, 13));

	return 0;
}

// Function to check if nth bit is on
int bit_test (unsigned int value, int n)
{
	// Assuming unsigned int is 32 bit long
	if (n > 31 || n < 0) {
		return 0;
	} else {
		value >>= n - 1;
		value &= 1;
		return value;
	}
}

// Function to turn nth bit on
int bit_set (unsigned int value, int n)
{
	// Assuming unsigned int is 32 bit long
	value |= (1 << (n - 1));

	return value;
}
