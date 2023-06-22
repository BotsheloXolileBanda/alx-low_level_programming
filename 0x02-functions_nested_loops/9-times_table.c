#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints a 9 timestable.
 *
 * Return: Void
 */
void times_table(void)
{
	int x, y;

	x = 0;

	while (x <= 9)
	{
		y = 0;

		while (y <= 9)
		{
			_putchar('x' * 'y');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
