#include "main.h"

/**
  * _print_rev_recurion - Prints a word in reverse using recursion.
  *
  * @s: The string to print.
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
		return;
	}
}
