#include <stdio.h>
#include <stdbool.h>

// Function to convert String to float

float strToFloat (char string[])
{
	bool isNegative, decimal;
	int i = 0, exponent = 10;
	float result = 0, digit;

	if (string[0] == '-') {
		isNegative = true;
		i = 1;
	}	

	for (; string[i] != '\0'; i++) {

		if (string[i] >= '0' && string[i] <= '9') {
			digit = string[i] - '0';
			if (decimal) {
				digit /= exponent;
				result += digit;
				exponent *= 10;
			} else {
				result = (result * 10) + digit;
			}

		} else if (string[i] == '.') { 
			decimal = true;
			continue;
		} else {
			printf("Error\n");
			return 0;
		}
	}

	if (isNegative)
		return -result;
	else
		return result;
}

int main (void)
{
	printf("%.2f\n", strToFloat("-234.56"));
	printf("%.4f\n", strToFloat("79.4365"));
	printf("%.4f\n", strToFloat("-867.6921"));

	return 0;
}
