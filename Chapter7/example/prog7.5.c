#include <stdio.h>

int main (void)
{
	int array_value[10] = {0, 1, 4, 9, 16};
	int i;

	for (i = 5; i < 10; i++)
	{
		array_value[i] = i * i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("array_value[%i] = %2i\n", i, array_value[i]);
	}

	return 0;
}
