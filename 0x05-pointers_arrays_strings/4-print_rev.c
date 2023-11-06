#include "main.h"

/**
 * print_rev - Reverses a string with a newline character.
 *
 * @s: The string to reverse.
 * Return: No value.
 */
void print_rev(char *s)
{
	int k;

	k = 0;

	while (*(s + k) != '\0')
	{
		k++;
	}

	while (k >= 0)
	{
		_putchar(*(s + (k - 1)));
		k--;
	}
	_putchar('\n');
}
