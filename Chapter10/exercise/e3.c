#include <stdio.h>
#include <stdbool.h>

// Function to determine is the character is alphabetic
 
bool alphabetic (const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '\'')
		return true;
	else
		return false;
}

// Function to check for special symbols

bool symbols (const char c)
{
	if ((c >= '0' && c <= '9') || c == '-')
		return true;
	else if (c == ',' || c == '.')
		return true;
	else
		return false;
}

// Function to count the number of words in a string

int countWords (const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true;
	bool alphabetic (const char c);

	for (i = 0; string[i] != '\0'; i++) {
		if (alphabetic (string[i]) || symbols (string[i])) {
			if (lookingForWord) {
				wordCount++;
				lookingForWord = false;
			}
		} else {
			lookingForWord = true;
		}
	}

	return wordCount;
}

// Function to read a line of text from the terminal

void readLine (char buffer[])
{
	char character;
	int i = 0;

	do {
		character = getchar ();
		buffer[i] = character;
		i++;
	} while (character != '\n');

	buffer [i - 1] = '\0';	
	return;
}

int main (void)
{
	char text[81];
	int totalWords = 0;
	int countWords (const char string[]);
	void realLine (char buffer[]);
	bool endOfText = false;

	printf("Type in your text.\n");
	printf("When you're done, press 'RETURN'.\n\n");

	while (!endOfText) {
		readLine (text);

		if (text [0] == '\0')
			endOfText = true;
		else
			totalWords += countWords(text);
	}

	printf("\nThere are %i words in the above text.\n", totalWords);

	return 0;
}
