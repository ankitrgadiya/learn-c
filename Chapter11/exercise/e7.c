// Program to sort an array of integers in ascending order. Pointer Ver

#include <stdio.h>

void sort (int *a, int n)
{
	int *i = a, *j;
	int	temp;

	for (; i - a != n; i++)
	{
		for (j = i + 1; j - a < n; j++)
		{
			if (*i > *j)
			{
				temp = *i;
				*i = *j;
				*j = temp;
			}
		}
	}
}

int main (void)
{
	int *i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
					 44, -3, -9, 12, 17, 22, 6, 11};
	void sort (int a[], int n);

	printf("The unsorted array\n");

	for (i = array; i - array != 16; i++)
	{
		printf("%i ", *i);
	}

	sort (array, 16);

	printf("\n\nThe sorted array\n");

	for (i = array; i - array != 16; i++)
	{
		printf("%i ", *i);
	}

	printf("\n");

	return 0;
}
