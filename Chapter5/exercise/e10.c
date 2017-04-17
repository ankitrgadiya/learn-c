// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
	int number;

	printf("Enter the number: ");
	scanf("%i", &number);

	while (number != 0)
	{
		int temp = number % 10;
		printf("%i", temp);

		number /= 10;
	}
		
	printf("\n");
	return 0;
}	
