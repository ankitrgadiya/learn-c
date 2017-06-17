#include <stdio.h>

int main (void)
{
	void substring (char source[], int start,
		   			int	count, char result[]);
	char s1[100] = "This is the sample string.";
	char s2[100];
	int start = 12;
	int count = 6;

	substring(s1, start, count, s2);

	printf("Result: %s\n", s2);

	return 0;
}

void substring (char source[], int start,
	  			int count, char result[])
{
	int i;

	for (i = 0; i < count && source[i + start] != '\0'; i++)
		result[i] = source[start + i];

	result[i] = '\0';

	return;
}
