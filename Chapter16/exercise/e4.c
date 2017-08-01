// Program to merge lines from two files

#include <stdio.h>

int main (void)
{
	FILE *file1, *file2, *out;
	char file1_name[81], file2_name[81], output[81], buffer[81];
	int flag1, flag2;

	printf("Enter file1 name: ");
	scanf("%s", file1_name);
	printf("Enter file2 name: ");
	scanf("%s", file2_name);
	printf("Enter output file name: ");
	scanf("%s", output);

	if ((file1 = fopen (file1_name, "r")) == NULL) {
		printf("Unable to open %s\n", file1_name);
		return 1;
	}

	if ((file2 = fopen (file2_name, "r")) == NULL) {
		printf("Unable to open %s\n", file2_name);
		return 1;
	}

	if ((out = fopen (output, "w")) == NULL) {
		printf("Unable to open %s\n", output);
		return 1;
	}

	flag1 = 1;
	flag2 = 1;

	while (flag1 == 1 || flag2 == 1) {
		if (fgets (buffer, 80, file1) != NULL)
			fputs (buffer, out);
		else
			flag1 = 0;

		if (fgets (buffer, 80, file2) != NULL)
			fputs (buffer, out);
		else
			flag2 = 0;
	}

	fclose (file1);
	fclose (file2);
	fclose (out);
	return 0;
}
