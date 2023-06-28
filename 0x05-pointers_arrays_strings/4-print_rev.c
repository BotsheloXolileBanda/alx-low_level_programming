#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be reversed.
 *
 * Return: No value.
 */
void print_rev(char *s)
{
	int r;

	r = 0;

	while (*(s + r) != '\0')
		r++;

	while (r >= 0)
	{
		_putchar(*(s + r));
		r--;
	}
	_putchar ('\n');
}
