// Program to solve quadratic

#include <stdio.h>
#include <stdbool.h>

float squareRoot (float x);
void get_values (void);
bool check_for_imaginary_roots (void);
void calculate_roots (void);
float absoluteValue (float x);

int a, b, c;
float root1, root2;

int main (void)
{
	get_values ();

	if (check_for_imaginary_roots())
	{
		printf("The roots are imaginary\n");
		return 1;
	}

	calculate_roots ();
	
	printf("Roots: %.2f, %.2f\n", root1, root2);

	return 0;
}

void get_values (void)
{
	printf("Enter a, b and c: ");
	scanf("%i %i %i", &a, &b, &c);

	return;
}

bool check_for_imaginary_roots (void)
{
	int result = (b * b) - (4 * a * c);

	if (result < 0)
		return true;
	else
		return false;
}

float absoluteValue (float x)
{
	if (x < 0)
		x = -x;
	return x;
}

float squareRoot (float x)
{
	const float epsilon = 0.00001;
	float		guess   = 1.0;

	while (absoluteValue ((guess * guess) / x - 1.0) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

void calculate_roots (void)
{
	int d = squareRoot ((b*b) - (4 * a * c));

	root1 = (-b - d)/ (2 * a);
	root2 = (-b + d)/ (2 * a);

	return;
}

