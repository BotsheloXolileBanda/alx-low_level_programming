#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 10 times.
 * Return: No value.
 */
void more_numbers(void)
{
	int g, x;

	for (g = 0; g <= 9; g++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
