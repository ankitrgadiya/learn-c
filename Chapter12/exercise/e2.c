/* Program to test is the compiler implements arithmetic or logic right 
 * shift for signed int.
 *
 * Assuming int is 32 bit long on the machine
 */

#include <stdio.h>

int main (void)
{
	int test = -1;

	test >>= 1;

	if (test == 0xffffffff)
		printf("Arithmetic right shift\n");
	else if (test == 0x7fffffff)
		printf("Logical right shift\n");
	else
		printf("Error\n");

	return 0;
}
