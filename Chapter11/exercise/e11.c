// Program to determine tomorrow's date

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int day;
	int month;
	int year;
};

// Function to calculate tomorrow's date
void dateUpdate (struct date *today)
{
	int numberOfDays (struct date *d);

	if (today->day != numberOfDays (today))
	{
		today->day++;
	}
	else if (today->month == 12)
	{
		today->day = 1;
		today->month = 1;
		today->year++;
	}
	else
	{
		today->day = 1;
		today->month++;
	}

	return;
}

// Function to find number of days in month

int numberOfDays (struct date *d)
{
	bool isLeapYear (struct date *d);
	int days;
	const int daysPerMonth [12] =
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear (d)  && d->month == 2)
		days = 29;
	else
		days = daysPerMonth [d->month - 1];

	return days;
}

// Function to determine if it's a leap year
 
bool isLeapYear (struct date *d)
{
	bool leapYearFlag;

	if (((d->year % 4 == 0) && (d->year % 100 != 0)) ||
		(d->year % 400 == 0))
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

int main (void)
{
	void dateUpdate (struct date *today);
	struct date date, *ptr;
	ptr = &date;
	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i %i %i", &date.month, &date.day, &date.year);

	dateUpdate (ptr);

	printf("Tomorrow's date is %i/%i/%.2i.\n", 
			ptr->month, ptr->day, ptr->year % 100);

	return 0;
}
