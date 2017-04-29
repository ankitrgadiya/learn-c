#include <stdio.h>

void displayMatrix (int nRows, int nCols, int array [nRows][nCols]);
void transposeMatrix (int nRows1, int nCols1, int array1 [nRows1][nCols1],
	   				  int nRows2, int nCols2, int array2 [nRows2][nCols2]);

int main (void)
{
	int matrix1 [4][5] = 
	{
		{  7, 16, 55, 13, 12},
		{ 12, 10, 52,  0,  7},
		{ -2,  1,  2,  4,  9},
		{ -9, 18, 29,  7, 19},
	};
	
	int matrix2 [5][4];

	printf("Original matrix\n");
	displayMatrix (4, 5, matrix1);

	transposeMatrix (4, 5, matrix1, 5, 4, matrix2);
	printf("Transposed matrix\n");
	displayMatrix (5, 4, matrix2);
	
	return 0;
}

void displayMatrix (int nRows, int nCols, int array [nRows][nCols])
{
	for (int row = 0; row < nRows; row++)
	{
		for (int col = 0; col < nCols; col++)
		{
			printf("%5i", array [row][col]);
		}

		printf("\n");
	}

	return;
}

void transposeMatrix (int nRows1, int nCols1, int array1 [nRows1][nCols1],
	   				  int nRows2, int nCols2, int array2 [nRows2][nCols2])
{
	for (int row = 0; row < nRows1; row++)
	{
		for (int col = 0; col < nCols1; col++)
		{
			array2 [col][row] = array1 [row][col];
		}
	}

	return;
}
