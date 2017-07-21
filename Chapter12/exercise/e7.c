// Program to extract specified set of bits from source.

#include <stdio.h>

int main (void)
{
	unsigned int bitpat_get (unsigned int source, int index, int count);
	unsigned int num = 0xabcdefba;

	printf("Extracted bits: %x\n", bitpat_get (num, 8, 4));

	return 0;
}

unsigned int bitpat_get (unsigned int source, int index, int count)
{
	unsigned int result;
	int unused = 0, source_val;

	// Calculate unused bits
	do {
		source_val = (source >> (31 - unused)) & 1;
		unused++;
	} while (source_val == 0);
	unused--;

	result = (source << (unused + index));
	result >>= 32 - count;

	return result;
}
