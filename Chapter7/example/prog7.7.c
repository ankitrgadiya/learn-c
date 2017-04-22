// Program to convert a positive integer to another base

#include <stdio.h>

int main (void)
{
	const char baseDigit[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit, base, index = 0;	
	
	// get the number and the base
	printf("Enter the number: ");
	scanf("%ld", &numberToConvert);
	printf("Enter the base: ");
	scanf("%i", &base);

	// convert to the indicated base
	do
	{
		convertedNumber[index] = numberToConvert % base;
		index++;
		numberToConvert /= base;
	}
	while (numberToConvert != 0);

	// display the result in the reverse order
	for (--index; index >= 0; index--)
	{
		nextDigit = convertedNumber[index];
		printf("%c", baseDigit[nextDigit]);
	}

	printf("\n");

	return 0;
}
