// Program to illustrate automatic and static variable

#include <stdio.h>

void auto_static (void)
{
	int 		autoVar = 1;
	static int 	staticVar = 1;
	printf("automaitc = %i; static = %i\n", autoVar, staticVar);

	autoVar++;
	staticVar++;
}

int main (void)
{
	int i;
	void auto_static (void);

	for (i = 0; i < 5; i++)
	{
		auto_static();
	}

	return 0;
}
