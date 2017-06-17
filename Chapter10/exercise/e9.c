#include <stdio.h>
#include <stdbool.h>

bool replaceString (char source[], char s1[], char s2[]);
int findString (const char source[], const char string[]);
void removeString (char source[], int index, int count);
void insertString (char source[], char string[], int index);
void substring (char source[], int start, char result[]);
int stringLen (char s[]);

int main (void)
{
	char text[100] = "This is the sample string.";
	bool stillfound;

	do {
		stillfound = replaceString (text, " ", "");
	} while (stillfound == true);

	printf("Result: %s\n", text);

	return 0;
}

// Function to replace string inside a string with third string.

bool replaceString (char source[], char s1[], char s2[])
{
	int index = findString (source, s1);
	if (index == -1)
		return false;

	int s1_len = stringLen (s1);
	removeString (source, index, s1_len);
	insertString (source, s2, index);
	return true;
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

// Function to remove part of the string

void removeString (char source[], int index, int count)
{
	int i;

	for (i = 0; source[i + index] != '\0'; i++)
		source[i + index] = source[i + index + count];
	

	return;
}	

// Function to insert string inside other string.

void insertString (char source[], char string[], int index)
{
	int i, j;
	int length = stringLen (string);
	char remainder[100];

	substring (source, index, remainder);

	for (i = 0; i < length; i++)
		source[index + i] = string[i];
	
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
