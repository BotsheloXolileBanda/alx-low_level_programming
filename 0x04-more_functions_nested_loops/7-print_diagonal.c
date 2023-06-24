#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Prints diagonal lines on screen.
 * @n: The number of times the diagonal should be printed.
 * Return: No value.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i, r;

	for (i = 1; i <= n; i++)
	{
		for (r = 0; r <= n; r++)
		{
			if (r == 0)
			{
				_putchar (47);
			}
			else
			{
				_putchar(r);
				_putchar(47);
			}
		}
		_putchar('\n');
	}
	}
}
