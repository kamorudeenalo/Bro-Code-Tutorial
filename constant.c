#include <stdio.h>

/**
  * constant = fixed value that cannot be altered by the program during its execution
  */

int main (void)
{
	const float PI = 3.14159;

	// PI = 2.98070809;	//This will produce error because we made PI a constact variable

	printf("This is the value of pi: %-8.2f\n", PI);

	return (0);
}
