// Program to calculate average of 10 floating value

#include <stdio.h>

int main (void)
{
	float avg = 0;
	float values[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Enter value %2i: ", i + 1);
		scanf("%f", &values[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		avg += values[i];
	}

	avg /= 10;

	printf("\nThe average is: %.2f\n", avg);

	return 0;
}	
