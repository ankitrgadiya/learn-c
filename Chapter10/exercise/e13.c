#include <stdio.h>

int main (void)
{
	void uppercase (char string[]);
	char name[100] = "ankit";
	char alias[100] = "elliot007";
	char sample[100] = "This is a sample.";

	uppercase (name);
	uppercase (alias);
	uppercase (sample);

	printf("Name: %s\n", name);
	printf("Alias: %s\n", alias);
	printf("Sample: %s\n", sample);

	return 0;
}

// Function to convert lowercase to uppercase

void uppercase (char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++) {
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] = string[i] - 'a' + 'A';
	}

	return;
}
