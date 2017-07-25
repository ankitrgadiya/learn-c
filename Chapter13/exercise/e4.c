#include <stdio.h>

#define MAX3(a, b, c)	((a)>(b))?(((a)>(c))?(a):(c)):((b)>(c))?(b):(c)

int main (void)
{
	int a = 3, b = 4, c = 5;

	printf("MAX3(%i, %i, %i): %i\n", a, b, c, MAX3(a, b, c));

	return 0;
}
