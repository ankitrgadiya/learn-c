// Program to calculate day from the date

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct weekDays
{
	char name [3];
};

int calculateN (struct date x);
int countDays (struct date a, struct date b);

int main (void)
{
	int n;
	struct date date;
	struct weekDays days [7] =
		{ {{'S', 'u', 'n'}},
		  {{'M', 'o', 'n'}},
		  {{'T', 'u', 'e'}},
		  {{'W', 'e', 'd'}},
		  {{'T', 'h', 'u'}},
		  {{'F', 'r', 'i'}},
		  {{'S', 'a', 't'}}};

	printf("Enter the date (dd mm yyyy): ");
	scanf("%i %i %i", &date.day, &date.month,
			&date.year);
	
	n = calculateN (date);

	printf("Day: %c%c%c\n", days[n].name[0],
			days[n].name[1], days[n].name[2]);

	return 0;
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

	n = ((((1461 * x.year) / 4) + ((153 * x.month) / 5) + x.day) - 621049) % 7;

	return n;
}
