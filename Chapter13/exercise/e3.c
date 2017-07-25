#include <stdio.h>

#define MIN(a, b) ((a)>(b))?(b):(a)

int main (void)
{
	int a = 2, b = 3;

	printf("%i\n", MIN(a, b));
	printf("%i\n", MIN(a * b, a + b));

	return 0;
}
