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
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if (today.day != numberOfDays (today))
	{
		tomorrow = (struct date) {++today.day, today.month, today.year};
	}
	else if (today.month == 12)
	{
		tomorrow = (struct date) {1, 1, ++today.year};
	}
	else
	{
		tomorrow = (struct date) {1, ++today.month, today.year};
	}

	return tomorrow;
}

// Function to find number of days in month

int numberOfDays (struct date d)
{
	bool isLeapYear (struct date d);
	int days;
	const int daysPerMonth [12] =
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear (d)  && d.month == 2)
		days = 29;
	else
		days = daysPerMonth [d.month - 1];

	return days;
}

// Function to determine if it's a leap year
 
bool isLeapYear (struct date d)
{
	bool leapYearFlag;

	if (((d.year % 4 == 0) && (d.year % 100 != 0)) ||
		(d.year % 400 == 0))
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

int main (void)
{
	struct date dateUpdate (struct date today);
	struct date thisDay, nextDay;

	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i %i %i", &thisDay.month, &thisDay.day, &thisDay.year);

	nextDay = dateUpdate (thisDay);

	printf("Tomorrow's date is %i/%i/%.2i.\n", 
			nextDay.month, nextDay.day, nextDay.year % 100);

	return 0;
}
