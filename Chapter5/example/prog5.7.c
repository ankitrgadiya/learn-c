/* Program to find the greatest common divison
 * of two non-negative integr values */

#include <stdio.h>

int main (void)
{
	int u, v, temp;

	printf("Enter two non-negative integers: ");
	scanf("%i%i", &u, &v);

	while ( v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	printf("The greatest common divison is %i\n", u);

	return 0;
}
