#include <stdio.h>

int main (void)
{
	int value1, value2;

	printf("Enter two numbers: ");
	scanf("%i%i", &value1, &value2);

	if (value2 == 0)
	{
		printf("Divison by zero\n");
		return 1;
	}

	if (value1 % value2 == 0)
	{
		printf("%i is factor of %i\n", value2, value1);
	}
	else
	{
		printf("%i is not a factor of %i\n", value2, value1);
	}

	return 0;

}

