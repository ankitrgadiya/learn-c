#include <stdio.h>

#define IS_LOWER_CASE(a)	((a)>= 'a' && (a)<= 'z')
#define IS_UPPER_CASE(a)	((a)>= 'A' && (a)<= 'Z')
#define IS_ALPHABETIC(a)	(IS_LOWER_CASE(a) || IS_UPPER_CASE(a))?1:0

int main (void)
{
	printf("%c  %i\n", 'a', IS_ALPHABETIC('a'));
	printf("%c  %i\n", '.', IS_ALPHABETIC('.'));
	printf("%c  %i\n", '9', IS_ALPHABETIC('9'));

	return 0;
}
