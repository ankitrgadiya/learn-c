#include <stdio.h>

int main (void)
{
	int base, power;
	long int x_to_the_n (int x, int n);

	printf("Enter the number: ");
	scanf("%i", &base);

	printf("Enter the power: ");
	scanf("%i", &power);

	if (power < 0)
	{
		printf("Bad input - must enter positive power\n");
		power = 1;
	}

	printf("%i^%i = %ld\n", base, power, x_to_the_n (base, power));

	return 0;
}

long int x_to_the_n (int x, int n)
{
	if (n == 1)
	{
		return x;
	}
	else 
	{
		return (x * x_to_the_n (x, n - 1));
	}

}
