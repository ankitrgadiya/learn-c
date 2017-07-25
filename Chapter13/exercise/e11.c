#include <stdio.h>
#include <ctype.h>

int main (void)
{
	printf("isalpha(%c)  %i\n", 'a', isalpha('a'));
	printf("isupper(%c)  %i\n", 'a', isupper('a'));
	printf("isdigit(%c)  %i\n", '9', isdigit('9'));

	return 0;
}
