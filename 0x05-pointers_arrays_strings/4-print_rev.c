#include "main.h"

/**
 * print_rev - Reverses a string.
 * @s: Inputted string.
 *
 * Return: No value.
 */
void print_rev(char *s)
{
	int r, x;

	r = 0;

	while (*(s + r) != '\0')
		r++;
	x = r;

	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
