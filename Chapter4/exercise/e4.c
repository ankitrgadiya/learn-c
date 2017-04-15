#include <stdio.h>

int main (void)
{
	
	// declare variable for temperature
	float farenheit = 27;
	float celsius;

	// formula to convert from F to C
	celsius = (farenheit - 32) / 1.8;
	
	// print results
	printf("%.2f in farenheit is %.2f in celsius.\n", farenheit, celsius);

	return 0;
}
