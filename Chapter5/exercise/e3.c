/* Table of triangular numbers
 * n (n - 1) / 2 */

#include <stdio.h>

int main (void)
{
	int n, tri_num;

	printf("TABLE OF TRIANGULAR NUMBER\n\n");
	printf(" n             n (n - 1) / 2\n");
	printf("-------    -----------------\n");

	for (n = 5; n <= 50; n++)
	{
		tri_num = (n * (n - 1)) / 2;
		printf("  %2i            %4i\n", n, tri_num);
	}

	return 0;
}
