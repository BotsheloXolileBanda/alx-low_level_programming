#include "main.h"

/**
 * _puts - Outputs a string including a newline character to the stdout.
 *
 * @str: The string to output.
 * Return: No value.
 */
void _puts(char *str)
{
	int k;

	k = 0;

	while (*(str + k) != '\0')
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
