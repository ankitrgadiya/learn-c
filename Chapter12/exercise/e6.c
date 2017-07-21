// Program to search for patters in bits

#include <stdio.h>

int main (void)
{
	int bitpat_search (unsigned int source, unsigned int pattern, int n);
	int index;

	index = bitpat_search (0xabcdefba, 0xdf, 8);
	if (index == -1)
		printf("Pattern not found\n");
	else
		printf("Pattern starts from index = %i\n", index);

	index = bitpat_search (0xe1f4, 0x5, 3);
	if (index == -1)
		printf("Pattern not found\n");
	else
		printf("Pattern starts from index = %i\n", index);

	return 0;
}

int bitpat_search (unsigned int source, unsigned int pattern, int n)
{
	short int source_val, pat_val, i, j, unused = 0;
	
	// Counts unused bits in the number
	do {
		source_val = (source >> (31 - unused)) & 1;
		unused++;
	} while (source_val == 0);

	// Checks for pattern in source
	for (i = 1; i + n <= 32; i++) {
		source_val = (source >> (32 - i)) & 1;
		pat_val = (pattern & 1);

		if (source_val == pat_val) {
			for (j = 0; j < n && source_val == pat_val; j++) {
				source_val = (source >> (32 - (i + j + 1))) & 1;
				pat_val = (pattern >> (j + 1)) & 1;
			}
		
		}

		if (j == n)
			return (i - unused);
		else
			continue;
	}	

	// If pattern not found
	return -1;
}
