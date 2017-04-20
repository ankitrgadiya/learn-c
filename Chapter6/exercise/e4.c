#include <stdio.h>

int main (void)
{
	float value, result;
	char operator;

	printf("Calculator: enter input in form number operator\n");
	printf("Choice of operator: + - * / S E\n");

	do
	{
		printf("Enter the expression: ");
		scanf("%f %c", &value, &operator);


		switch(operator)
		{
			case 'S':
				result = value;
				break;
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '*':
				result *= value;
				break;
			case '/':
				if (value == 0)
				{
					printf("Division by zero\n");
					continue;
				}
				result /= value;
				break;
			case 'E':
				break;
			default:
				printf("Not valid\n");
				break;
		}
		
		printf("= %f\n", result);
	}
	while (operator != 'E');

	return 0;
}
