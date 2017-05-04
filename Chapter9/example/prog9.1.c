// Program to illustrate structure

#include <stdio.h>

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today;

	today.month = 4;
	today.day = 29;
	today.year = 2017;

	printf("Today's date is %i/%i/%.2i.\n", today.month, 
			today.day, today.year % 100);

	return 0;
}


