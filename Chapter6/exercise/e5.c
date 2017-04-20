// Program to reverse the digits of number (improved)

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int number, right_digit;
	bool negative = false;	

	printf("Enter the number: ");
	scanf("%i", &number);
	
	if (number < 0)
	{
		negative = true;
		number = -number;
	}

	do
	{
		right_digit = number % 10;
		printf("%i", right_digit);

		number /= 10;
	}
	while (number != 0);

	if (negative)
	{
		printf("-\n");
	}
	else
	{
		printf("\n");
	}

	return 0;
}
