#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 *
 * @str: The string to compute.
 * Return: No value.
 */
void puts2(char *str)
{
	int k;

	k = 0;

	while (*(str + k) != '\0')
	{
		_putchar(*(str + k));
		k += 2;
	}
	_putchar('\n');
}
