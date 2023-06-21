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
	int last_digit = (x % 10);

	if ((x < 10) || (x > -10))
	{
		_putchar (x + '0');
		return (x);
	}
	else
		_putchar (last_digit + '0');
	return (last_digit);
}
