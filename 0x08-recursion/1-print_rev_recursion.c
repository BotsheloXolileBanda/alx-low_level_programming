#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints reversed string in recursion control structure
 *
 * @s: The string to process and print in reverse.
 * Return: No value.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
