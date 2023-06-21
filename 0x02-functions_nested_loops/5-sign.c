#include <stdio.h>
#include "main.h"

/**
 * print_sign - Determines sign of number.
 *
 * @n: Number to be checked.
 *
 * Return: A value of 1 if number is positive, 0 and -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
		_putchar(',');
		_putchar('\n');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
		_putchar(',');
		_putchar('\n');
	}
	else
	{
		return (-1);
		_putchar('-');
		_putchar(',');
		_putchar('\n');
	}
	return (0);
}
