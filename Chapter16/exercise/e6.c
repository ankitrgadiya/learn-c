// Program to print out files 20 lines at a time

#include <stdio.h>

int main (void)
{
	FILE *in;
	char buffer[81], file[81], c;
	int flag = 1;

	printf("File: ");
	scanf("%80s", file);

	if ((in = fopen (file, "r")) == NULL) {
		printf("Unable to open the file: %s\n", file);
		return 1;
	}

	while (flag) {
		c = getchar();
		for (int i = 0; i < 20; i++) {
			if (fgets(buffer, 80, in) != NULL)
				printf("%s", buffer);
			else
				flag = 0;
		}

		do {
			c = getchar();
		} while (c == '\n');

		if (c == 'q')
			flag = 0;
	}

	fclose (in);
	return 0;
}
