// Program to update date and time

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int day;
	int month;
	int year;
};

struct time
{
	int hour;
	int minute;
	int second;
};

struct dateAndTime
{
	struct date date;
	struct time time;
};


// Function to calculate tomorrow's date
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if (today.day != numberOfDays (today))
	{
		tomorrow.day 	= today.day + 1;
		tomorrow.month	= today.month;
		tomorrow.year	= today.year;
	}
	else if (today.month == 12)
	{
		tomorrow.day 	= 1;
		tomorrow.month	= 1;
		tomorrow.year	= today.year + 1;
	}
	else
	{
		tomorrow.day	= 1;
		tomorrow.month	= today.month + 1;
		tomorrow.year	= today.year;
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

// Function to update the time by one second

struct dateAndTime timeUpdate (struct dateAndTime now)
{
	now.time.second++;

	if (now.time.second == 60)			// next minute
	{
		now.time.second = 0;
		now.time.minute++;

		if (now.time.minute == 60)		// next hour
		{
			now.time.minute = 0;
			now.time.hour++;
			
			if (now.time.hour == 24)		// midnight
			{
				now.time.hour = 0;
				now.date = dateUpdate (now.date);
			}
		}
	}

	return now;
}

int main (void)
{
	struct dateAndTime current, later;

	printf("Enter date and time (dd/mm/yyyy hh:mm:ss): ");
	scanf("%i/%i/%i %i:%i:%i", &current.date.day, &current.date.month,
			&current.date.year, &current.time.hour, &current.time.minute,
			&current.time.second);

	later = timeUpdate (current);

	printf("Updated: %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n", later.date.day, 
			later.date.month, later.date.year, later.time.hour,
			later.time.minute, later.time.second);

	return 0;
}
