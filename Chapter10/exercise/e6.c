#include <stdio.h>

int main (void)
{
	void removeString (char source[], int index, int count);
	char string[100] = "This is the sample string.";
	int index = 0;
	int count = 5;

	removeString (string, index, count);

	printf("Result: %s\n", string);	
	
	return 0;
}

// Function to remove part of the string

void removeString (char source[], int index, int count)
{
	int i;

	for (i = 0; source[i + index] != '\0'; i++)
	   source[i + index] = source[i + index + count];
		
	return;
}	
