// Program to illustrate structure pointers

#include <stdio.h>

int main (void)
{
	struct date {
		int month;
		int day;
		int year;
	};

	struct date today, *datePtr;

	datePtr = &today;

	datePtr->month = 24l;
	datePtr->day = 6;
	datePtr->year = 2017;

	printf("Today's date: is %i/%i/%.2i\n",
		   	datePtr->month, datePtr->day, datePtr->year % 1000);

	return 0;
}
