#include <stdio.h>

int main (void)
{
		int dollars, cents, count;

		for ( count = 1; count <= 10; ++count ) {
				
				printf ("Enter dollars: ");
				scanf ("%i", &dollars);
				printf ("Enter cents: ");
				scanf ("%i", &cents);

				// "." before field width places a "0" if only 1 digit is there
				printf ("$%i.%.2i\n\n", dollars, cents);
		}

		return 0;
}
