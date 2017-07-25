#include <stdio.h>

#define ABSOLUTE(a)		((a)>= 0)?a:-a

int main (void)
{
	printf("%i	%i\n", -1, ABSOLUTE(-1));
	printf("%i	%i\n", 100, ABSOLUTE(100));
	printf("%i	%i\n", 0, ABSOLUTE(0));

	return 0;
}
