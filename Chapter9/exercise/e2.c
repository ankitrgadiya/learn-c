// Program to calculate days between two dates

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int calculateN (struct date x);
int countDays (struct date a, struct date b);

int main (void)
{
	struct date firstDate, nextDate;
	
	// Take values for both dates
	printf("Enter first date (dd mm yyyy): ");
	scanf("%i %i %i", &firstDate.day, &firstDate.month,
			&firstDate.year);
	
	printf("Enter next  date (dd mm yyyy): ");
	scanf("%i %i %i", &nextDate.day, &nextDate.month,
			&nextDate.year);

	printf("Total number of days between them: %i\n", 
			countDays(firstDate, nextDate));

	return 0;
}

int countDays (struct date a, struct date b)
{
	int n1, n2, days;

	n1 = calculateN (a);
	n2 = calculateN (b);

	days = n2 - n1;

	return days;
}

int calculateN (struct date x)
{
	int n;

	if ( x.month <= 2)
	{
		x.year -= 1;
		x.month += 13;
	}
	else
	{
		x.month += 1;
	}

	n = (((1461 * x.year) / 4) + ((153 * x.month) / 5) + x.day);

	return n;
}
