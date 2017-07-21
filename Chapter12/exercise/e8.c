// Program to set speficied sets of bit in an unsigned int

#include <stdio.h>

int main (void)
{
	void bitpat_set (unsigned int *source, unsigned int num,
					int index, int count);

	unsigned int source = 0xabcdefbau, new = 0xfu;

	printf("Original: %x\n", source);
	bitpat_set (&source, new, 8, 4);

	printf("Result  : %x\n", source);


}

// Function to set specified  bits
void bitpat_set(unsigned int *source, unsigned int num,
				int index, int count)
{
	int int_size (void);
	int unused_bits (unsigned int source);
	
	int size, unused;	
	size = int_size();
	unused = unused_bits (*source);

	int null = 1;
	for (int i = 0; i < count; i++)
		null *= 2;

	null--;

	*source <<= unused;
	*source &= ~(null << (size - index - count));
	num <<= 32 - (index + count);

	*source |= num;
	*source >>= unused;

	return;
}

// Function to calculate the size of int
int int_size (void)
{
	int num = ~0, counter = 0;
	
	while (num != 0) {
		num <<= 1;
		counter++;
	}

	return counter;
}

// Functiont to calculate unused bits in number
int unused_bits (unsigned int source)
{
	int unused = 0, source_val;

	do {
		source_val = (source >> (31 - unused)) & 1;
		unused++;
	} while (source_val == 0);

	return --unused;
}
