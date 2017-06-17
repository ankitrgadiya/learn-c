#include <stdio.h>

int main (void)
{
	void insertString (char source[], char string[], int index);

	char s1[100] = "This is the string.";
	char s2[100] = "sample ";
	int position = 12;

	insertString (s1, s2, position);

	printf("Result: %s\n", s1);

	return 0;
}

// Function to insert string inside other string.

void insertString (char source[], char string[], int index)
{
	void substring (char source[], int start,
					char result[]);
	int stringLen (char s[]);

	int i, j;
	int length = stringLen (string);
	char remainder[100];

	substring (source, index, remainder);

	for (i = 0; i < length; i++) {
		source[index + i] = string[i];
	}	
	
	for (j = 0; remainder[j] != '\0'; j++)
		source[index + i + j] = remainder[j];
	
	source[i + index + j] ='\0';
	return;
}

// Function to extract part of the string.

void substring (char source[], int start,
	  			char result[])
{
	int i;

	for (i = 0; source[i + start] != '\0'; i++)
		result[i] = source[start + i];

	result[i] = '\0';

	return;
}

// Function to count length of a string

int stringLen (char s[])
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return i;
}
