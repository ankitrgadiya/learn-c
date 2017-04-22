// Program to generate the first 15 Fibonacci numbers.

#include <stdio.h>

int main (void)
{
	int num1, num2, current_num;
	num1 = 0;
	num2 = 1;
	
	for (int i = 2; i < 15; i++)
	{
		current_num = num1 + num2;
		printf("%i\n", current_num);
		num1 = num2;
		num2 = current_num;
	}

	return 0;
}

