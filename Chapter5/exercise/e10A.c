// Program to reverse the digits of a number

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int number;

	printf("Enter the number: ");
	scanf("%i", &number);

	if (number < 0)
	{
		number = abs(number);
		printf("-");
	}

	while (number != 0)
	{
		int temp = number % 10;
		printf("%i", temp);

		number /= 10;
	}
		
	printf("\n");
	return 0;
}	
