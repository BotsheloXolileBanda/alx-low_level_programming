#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Return: No value.
 */
void _print_rev_recursion(char *s)
{
	int r;

	r = 0;

	if (*(s + r) == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*(s + r));
}
