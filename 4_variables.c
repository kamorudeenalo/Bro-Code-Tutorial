#include <stdio.h>

/**
 * Variable =  	Allocated space in memory to a value.
 * 		We refer to a variable's name to access the stored value.
 * 		That variable now behaves as if it was the value it contains
 * 		BUT we need to declare what type of data we are storing.
 */

int main()
{
	int x;		//declaration
	x = 123;	//initialization
	int y = 321;	//declaration + initialization
	
	int age = 21;		//integer
	float gpa = 4.99;	//floating point number
	char grade = 'A';	//single character
	char name[] = "Kamorudeen Alowonle";	//array of characters

	printf("My name is %s. I am %d years old.\nI am a \"Grade %c\" student of the University of Canada studying Computer Science.\nMy Cummulative Grade Point Average (CGPA) is %.2f. \n", name, age, grade, gpa);

	return (0);
}
