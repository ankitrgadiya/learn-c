#include <stdio.h>
#include <stdbool.h>

struct entry {
	char word[15];
	char defination[50];
};

// Function declaration

void dictionarySort (void);
int compareStrings (char s1[], char s2[]);
void copyString (char s1[], char s2[]);
void changeEntry (int x, int y);

// Dictionary

struct entry dictionary[100] = 
{	{ "ajar",		"partially opened"						},
	{ "aigrette",	"an ornamental cluster of feathers",	},
	{ "ahoy",		"a nautical call for greeting"			},
	{ "agar",		"a jelly made from seaweed"				},
	{ "affix", 		"to append; attach"						},
	{ "aerie",		"a high nest"							},
	{ "addle", 		"to become confused"					},
	{ "acumen",		"mentally sharp; keen"					},
	{ "abyss",		"a bottomless pit"						},
	{ "aardvark", 	"a burrowing African mammal"			}, };

int main (void)
{
	int i;

	printf("Unsorted Dictionary: \n\n");
	for (i = 0; i < 10; i++)
		printf("%10s : %s\n", dictionary[i].word, dictionary[i].defination);

	dictionarySort();

	printf("Sorted Dictionary: \n\n");
	for (i = 0; i < 10; i++)
		printf("%10s : %s\n", dictionary[i].word, dictionary[i].defination);

	return 0;
}

// Function to sort dictionary

void dictionarySort (void)
{
	int i, compare;
	int sortCounter = 1;

	while (sortCounter != 0) {
		sortCounter = 0;

		for (i = 0; i < 9; i++) {
			compare = compareStrings (dictionary[i].word, 
								dictionary[i + 1].word);

			if (compare == 1) 
			{
				changeEntry (i, i + 1);
				sortCounter++;
			}
		}
	}

	return;
}

// Function to compare two character strings

int compareStrings (char s1[], char s2[])
{
	int i = 0, answer;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	
	if (s1[i] < s2[i])
		answer = -1;
	else if (s1[i] == s2[i])
		answer = 0;
	else
		answer = 1;

	return answer;
}

// Function to change interchange entry in dictionary

void changeEntry (int x, int y)
{
	struct entry temp;

	copyString (dictionary[x].word, temp.word);
	copyString (dictionary[y].word, dictionary[x].word);
	copyString (temp.word, dictionary[y].word);

	copyString (dictionary[x].defination, temp.defination);
	copyString (dictionary[y].defination, dictionary[x].defination);
	copyString (temp.defination, dictionary[y].defination);

	return;
}

// Function to copy content of string to other

void copyString (char s1[], char s2[])
{
	int i = 0;

	while (s1[i] != '\0') {
		s2[i] = s1[i];
		i++;
	}

	s2[i] = '\0';

	return;
}
