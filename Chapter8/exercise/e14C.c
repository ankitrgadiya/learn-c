#include <stdio.h>

int matrix1 [4][5] = 
{
	{  7, 16, 55, 13, 12},
	{ 12, 10, 52,  0,  7},
	{ -2,  1,  2,  4,  9},
	{ -9, 18, 29,  7, 19},
};
int nCol1 = 4, nRow1 = 5;

int matrix2 [5][4];
int nCol2 = 5, nRow2 = 4;

void displayMatrix (int nRows, int nCols, int array [nRows][nCols]);
void transposeMatrix (void);

int main (void)
{

	printf("Original matrix\n");
	displayMatrix (4, 5, matrix1);

	transposeMatrix ();
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

void transposeMatrix (void)
{
	for (int row = 0; row < nRow1; row++)
	{
		for (int col = 0; col < nCol1; col++)
		{
			matrix2 [col][row] = matrix1 [row][col];
		}
	}

	return;
}
