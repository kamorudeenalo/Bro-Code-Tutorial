#include <stdio.h>

/**
  *	Arithmetic operators

  * + 	addition
  * - 	subtraction
  * * 	multiplication
  * / 	division
  * % 	modulus
  * ++ 	increment
  * -- 	decrement
*/

int main (void)
{
  int x = 5;
  int y = 2;

  int addNum = x + y; 
  int SubNum = x - y;
  int mulNum = x * y;
  float divNum = x / (float) y; // Using "(float) y" is used to alter variabe y data type
  int modNum = x % y;
  x++;
  y--;


  printf("x = 5\n");
  printf("y = 2\n\n");

  printf("x + y: %8d\n", addNum);
  printf("x - y: %8d\n", SubNum);
  printf("x * y: %8d\n", mulNum);
  printf("x / y: %8.1f\n", divNum);
  printf("x %% y: %8d\n", modNum);
  printf("x++: %8d\n", x);
  printf("y--: %8d\n\n", y);



  return (0);
}