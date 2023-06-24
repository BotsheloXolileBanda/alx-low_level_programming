#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 10 times.
 * Return: No value.
 */
void more_numbers(void)
{
	int g, x;

	g = 1;
	while (g <= 10)
	{
		x = 0;

		while (x <= 14)
		{
			_putchar(x + '0');
			x++;
		}
		_putchar('\n');
		g++;
	}
}
