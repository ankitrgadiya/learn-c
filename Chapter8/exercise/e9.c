// Program to calculate least common multiple

#include <stdio.h>

int gcd (int u, int v);
int lcm (int u, int v);

int main (void)
{
	int result = lcm(150, 35);
	printf("The lcm of 150 and 35 is %i\n", result);

	return 0;
}
	
int lcm (int u, int v)
{
	int	ans = u * v/ gcd (u, v);

	return ans;
}

int gcd (int u, int v)
{
	int temp;

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}
