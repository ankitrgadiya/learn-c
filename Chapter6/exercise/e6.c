#include <stdio.h>

int main (void)
{
	int num, right_digit, rev_num, copy_num;

	printf("Enter the number: ");
	scanf("%i", &num);

	if (num < 0)
	{
		printf("negative ");
		num = -num;
	}
	
	rev_num = 0;
	do
	{
		rev_num *= 10;
		right_digit = num % 10;
		rev_num += right_digit;
		num /= 10;
	}
	while (num != 0);

	copy_num = num;

	do
	{
		right_digit = rev_num % 10;
		switch(right_digit)
		{
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			case 0:
				printf("zero ");
				break;
			default:
				printf("Invalid");
				break;
		}

		rev_num /= 10;
	}
	while(rev_num != 0);

	if (copy_num % 10 == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("\n");
	}

	return 0;
}
