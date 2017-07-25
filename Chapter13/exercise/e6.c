#include <stdio.h>

#define IS_UPPER_CASE(a)	((a)>='A' && (a)<='Z')?1:0

int main (void)
{
	char test = 'J';

	if (IS_UPPER_CASE(test))
		printf("Upper case\n");
	else
		printf("Not Upper case\n");

	if (IS_UPPER_CASE('|'))
		printf("Upper case\n");
	else
		printf("Not Upper case\n");

	return 0;
}
