#include <stdio.h>

#define IS_DIGIT(a)			((a)>= '0' && (a)<= '9')
#define IS_LOWER_CASE(a)	((a)>= 'a' && (a)<= 'z')
#define IS_UPPER_CASE(a)	((a)>= 'A' && (a)<= 'Z')
#define IS_ALPHABETIC(a)	(IS_LOWER_CASE(a) || IS_UPPER_CASE(a))
#define IS_SPECIAL(a)		(!IS_ALPHABETIC(a) && !IS_DIGIT(a))?1:0

int main (void)
{
	printf("%c  %i\n", 'a', IS_SPECIAL('a'));
	printf("%c  %i\n", '|', IS_SPECIAL('|'));

	return 0;
}
