#include <stdio.h>

enum month {january=1, february, march, april, may, june,
			july, august, september, october, november, december};

int main (void)
{
	char * monthName (enum month aMonth);
	enum month aMonth = april;

	printf("%s\n", monthName (aMonth));

	return 0;
}

char * monthName (enum month aMonth)
{
	switch (aMonth) {
		case 1:
			return "January";
		case 2:
			return "February";
		case 3:
			return "March";
		case 4:
			return "April";
		case 5:
			return "May";
		case 6:
			return "June";
		case 7:
			return "July";
		case 8:
			return "August";
		case 9:
			return "September";
		case 10:
			return "October";
		case 11:
			return "November";
		case 12:
			return "December";
		default:
			return "Bad Month";
	}
}
