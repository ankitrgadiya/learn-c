// Program to demonstrate typedef for pointer to a function

#include <stdio.h>

int main (void)
{
	// Declaration of the function
	int dummyFunctionWhichReturns2 (void);

	/* Defining typedef functionPtr to be a pointer to
	 * a function which takes no arguments and returns 
	 * an int
	 */
	typedef int (*functionPtr) (void);

	/* Declaring variable of new datatype functionPtr
	 * to be equal to previously defined function
	 */
	functionPtr fPtr = dummyFunctionWhichReturns2;

	printf("%i\n", fPtr());

	return 0;
}

/* A dummy function which returns 2, with unnecessarily 
 * long name
 */
int dummyFunctionWhichReturns2 (void)
{
	return 2;
}
