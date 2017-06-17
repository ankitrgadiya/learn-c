#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	void intToStr (int num, char result[]);
	char answer[100];

	intToStr (-1892, answer);
	printf("%s\n", answer);
	intToStr (435, answer);
	printf("%s\n", answer);

	return 0;
}

// Function to convert int to string

void intToStr (int num, char result[])
{
	int stringLen (char s[]);
	char reverse[100];
	bool isNegative = false;
	int i = 0, j = 0, length;

	if (num < 0) {
		isNegative = true;
		num *= -1;
	}

	while (num != 0) {
		reverse[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	
	if (isNegative) {
		reverse[i] = '-';
		i++;
	}

	reverse[i] = '\0';
	length = stringLen (reverse) - 1;

	for (; length >= 0; length--, j++)
		result[j] = reverse[length];

	result[j] = '\0';

	return;
}	

// Function to count length of a string

int stringLen (char s[])
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return i;
}
