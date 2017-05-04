// Program to calculate elapsed time

#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

struct time calculateTime (struct time start, struct time end);

int main (void)
{
	struct time startTime, endTime, elapsedTime;

	printf("Enter start time (hh:mm:ss): ");
	scanf("%i:%i:%i", &startTime.hour,
			&startTime.minute, &startTime.second);

	printf("Enter end   time (hh:mm:ss): ");
	scanf("%i:%i:%i", &endTime.hour,
			&endTime.minute, &endTime.second);

	elapsedTime = calculateTime (startTime, endTime);
	printf("Elapsed time: %.2i:%.2i:%.2i\n", elapsedTime.hour,
		   elapsedTime.minute, elapsedTime.second);

	return 0;
}	

struct time calculateTime (struct time start, struct time end)
{
	struct time passedTime = {0, 0, 0};

	passedTime.second += end.second - start.second;

	if (passedTime.second < 0)
	{
		passedTime.minute--;
		passedTime.second = 60 + passedTime.second;
	}
	
	passedTime.minute += end.minute - start.minute;

	if (passedTime.minute < 0)
	{
		passedTime.hour--;
		passedTime.minute = 60 + passedTime.minute;
	}

	passedTime.hour   += end.hour   - start.hour;

	if (passedTime.hour < 0)
	{
		passedTime.hour += 24;
	}

	return passedTime;
}
