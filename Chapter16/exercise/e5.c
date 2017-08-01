// Program to print specified columns of a file

#include <stdio.h>

int main (void)
{
	FILE *in;
	char file[81], buffer[81];
	int col_m, col_n;

	printf("File: ");
	scanf("%s", file);
	printf("Columns are 1 indexed.\n");
	printf("From column: ");
	scanf("%i", &col_m);
	printf("To column: ");
	scanf("%i", &col_n);

	if ((in = fopen (file, "r")) == NULL) {
		printf("Unable to open %s\n", file);
		return 1;
	}

	if (col_m > col_n || col_m == 0) {
		printf("Invalid values of columns\n");
		return 2;
	}

	while (1) {
		if (fgets (buffer, 80, in) != NULL) {
			for (int i = col_m - 1; i < (col_n - col_m + 1); i++)
				printf("%c", buffer[i]);

			printf("\n");
		} else {
			break;
		}
	}

	fclose (in);

	return 0;
}
