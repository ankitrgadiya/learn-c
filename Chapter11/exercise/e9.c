// Readline Pointer version

#include <stdio.h>

void readLine (char *buffer)
{
	char character;
	int i = 0;

	do {
		character = getchar ();
		*(buffer + i) = character;
		i++;
	} while (character != '\n');

	*(buffer + i - 1) = '\0';	
	return;
}

int main (void)
{
	char string[100];

	readLine(string);

	printf("%s\n", string);

	return 0;
}
