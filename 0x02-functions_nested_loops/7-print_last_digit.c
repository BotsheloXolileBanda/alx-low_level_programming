#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @x: The number to be checked.
 *
 * Return: The last digit.
 */
int print_last_digit(int x)
{
	if ((x < 10) || (x > -10))
	{
		return (x);
	}
	else
	{
		return (x % 10);
	}
}
