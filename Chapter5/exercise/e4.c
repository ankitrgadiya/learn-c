// Table of Factorial

#include <stdio.h>

int main (void)
{

	int n, fact;

	printf(" TABLE OF FACTORIAL\n\n");
	printf("  n               n!  \n");
	printf("------   -------------\n");

	for (n = 1, fact = 1; n <= 10; n++)
	{
		fact *= n;
		printf(" %2i          %7i\n", n, fact);
	}

	return 0;
}
