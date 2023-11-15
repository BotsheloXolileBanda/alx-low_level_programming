#include "main.h"

/**
  * _puts_recursion - Implements a version of puts based on recursion.
  *
  * @s: The string to print.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
