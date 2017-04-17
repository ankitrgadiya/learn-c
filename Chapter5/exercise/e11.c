// Sum of digits

#include <stdio.h>

int main (void)
{
	int number, sum;
	printf("Enter the number: ");
	scanf("%i", &number);

	sum = 0;
	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}

	printf("The sum of digits is %i.\n", sum);

	return 0;
}
