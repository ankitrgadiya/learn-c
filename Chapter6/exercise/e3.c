#include <stdio.h>

int main (void)
{
	float value1, value2;

	printf("Enter two numbers: ");
	scanf("%f %f", &value1, &value2);

	if (value2 == 0)
	{
		printf("Division by zero\n");
	}
	else
	{
		printf("%.3f\n", value1 / value2);
	}

	return 0;
}
