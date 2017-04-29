// Program to convert a positive integer to another base

#include <stdio.h>

int			convertedNumber [64];
long int	numberToConvert;
int			base;
int			digit = 0;

void getNumberAndBase (void)
{
	printf("Enter the number: ");
	scanf("%li", &numberToConvert);

	printf("Enter the base: ");
	scanf("%i", &base);
	while (base < 2 || base > 16)
	{
		printf("Bad case - must be between 2 and 16: ");
		scanf("%i", &base);
	}

	return;
}

void convertNumber (void)
{
	do
	{
		convertedNumber [digit] = numberToConvert %base;
		numberToConvert /= base;
		digit++;
	}
	while (numberToConvert != 0);

	return;
}

void displayConvertedNumber (void)
{
	const char baseDigit [16] = 
		{ '0', '1', '2', '3', '4', '5', '6', '7',
		  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int nextDigit;

	printf("Converted number = ");
	for (--digit; digit >= 0; digit--)
	{
		nextDigit = convertedNumber [digit];
		printf("%c", baseDigit [nextDigit]);
	}

	printf("\n");

	return;
}

int main (void)
{
	void getNumberAndBase (void);
	void convertNumber (void);
	void displayConvertedNumber (void);

	getNumberAndBase ();
	convertNumber ();
	displayConvertedNumber ();

	return 0;
}
