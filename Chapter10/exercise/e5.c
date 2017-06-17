#include <stdio.h>

int main (void)
{
	int findString (const char source[], const char string[]);
	const char s1[100] = "This is the sample string.";
	const char s2[100] = "the";
	int index = findString (s1, s2);

	printf("Index: %i\n", index);

	return 0;
}

// Function to seach for string inside other string

int findString (const char source[], const char string[])
{
	int i = 0, j = 0;

	while (source[i] != '\0') {
		if (source[i] == string[0]) {
			while (source[i + j] == string[j])
				j++;

			if (string[j] == '\0')
				return i;
		}
		i++;
	}	

	return -1;
}
