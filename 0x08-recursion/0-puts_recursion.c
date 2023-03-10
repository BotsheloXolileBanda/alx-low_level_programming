#include "main.h"


/**
  * _puts_recursion - Prints a string to standard output
  *
  * @s: string to be printed
  *
  * Return: Void
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
