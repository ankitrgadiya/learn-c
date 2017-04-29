// Program to sort an array of integers in ascending order.

#include <stdio.h>

int a[16] = {34, -5, 6, 0, 12, 100, 56, 22,
				 44, -3, -9, 12, 17, 22, 6, 11};

void sort (int n, char order)
{
	int i, j, temp;

	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (order == 'a')
			{
				if (a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			else if (order == 'd')
			{
				if (a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			else
				printf("Invalid order.\n");
		}
	}
}

int main (void)
{
	int i;
	void sort (int n, char order);

	printf("The unsorted array\n");

	for (i = 0; i < 16; i++)
	{
		printf("%i ", a[i]);
	}

	sort (16, 'a');

	printf("\n\nThe sorted array in ascending order\n");

	for (i = 0; i < 16; i++)
	{
		printf("%i ", a[i]);
	}

	sort (16, 'd');

	printf("\n\nThe sorted array in descending order\n");

	for (i = 0; i < 16; i++)
	{
		printf("%i ", a[i]);
	}

	printf("\n");

	return 0;
}
