#include <stdio.h>

int main (void)
{
	float f = 1.00;
	short int i = 100;
	long int l = 500L;
	double d = 15.00;

	printf("%.2f + %i = %.2f\n", f, i , f + i);	// 101.00
	printf("%ld / %.2f = %.2f\n", l , d , l / d);	// 33.33
	printf("%d / %ld + %.2f = %.2f\n", i, l, f, i/l + f);	// 1.00
	printf("%ld * %d = %ld\n", l, i, l*i);	// 50000
	printf("%.2f / 2 = %.2f\n", f, f / 2);	// 0.50
	printf("%d / (%.2f + %.2f) = %.2f\n", i, d, f, i / (d + f));	// 6.25
	printf("%ld / (%d * 2.0) = %.2f\n", l, i, l / (i * 2.0));	// 2.50
	printf("%ld + %d / (double) %ld = %.2f\n", l, i, l, l + i / (double) l);	// 500.20

	return 0;
}
