#include "main.h"

/**
 * _puts - Prints out a string to stdout.
 * @str: String to be printed.
 *
 * Return: No value.
 */
void _puts(char *str)
{
	int q;

	q = 0;

	while (*(str + q) != '\0')
	{
		_putchar(*(str + q));
		q++;
	}
	_putchar('\n');
}
