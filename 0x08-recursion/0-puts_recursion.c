#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * Return: No value.
 */
void _puts_recursion(char *s)
{
	int r = 0;

	if (*(s + r) == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*(s + r));
		_puts_recursion(s + 1);
	}
}
