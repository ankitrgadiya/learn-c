# include <stdio.h>

int main (void)
{
	int number, triangularNumber, times;

	printf("How many triangular numbers to calculate: ");
	scanf("%i", &times);

	for (int counter = 1; counter <= times; counter++)
	{
		printf("What triangular number do you want: ");
		scanf("%i", &number);

		triangularNumber = 0;

		for (int n = 1; n <= number; n++)
		{
			triangularNumber += n;
		}

		printf("The triangular number %i is %i\n", number, triangularNumber);
	}

	return 0;
}
