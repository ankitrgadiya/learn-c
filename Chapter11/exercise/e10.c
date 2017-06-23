// Compare string - Pointer Ver

#include <stdio.h>

// Function to compare two character strings

int compareStrings (const char *s1, const char *s2)
{
	int answer;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0'){
		s1++;
		s2++;
	}
	
	if (*s1 < *s2)
		answer = -1;
	else if (*s1 == *s2)
		answer = 0;
	else
		answer = 1;

	return answer;
}

int main (void)
{
	char str1[20] = "azar";
	char str2[20] = "aztec";

	printf("%i\n", compareStrings (str1, str2));
	printf("%i\n", compareStrings (str1, "azar"));

	return 0;
}
