#include "main.h"

/**
 * _puts_recursion - Implmements puts using recursion.
 *
 * @s: THe string to print.
 * Return: No value.
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
