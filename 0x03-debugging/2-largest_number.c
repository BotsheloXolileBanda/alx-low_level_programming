#include "main.h"

/**
  * largest_number - returns the largest number
  * @a: first integer
  * @b: second integer
  * @c: third integer
  * Return: largest integer
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	if (b > a && b > c)
	{
		largest = b;
	}
	if (c > a && c > b)
	{
		largest = c;
	}

	return (largest);
}
