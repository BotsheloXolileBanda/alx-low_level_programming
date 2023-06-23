#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 * Return: nothing
 */
void print_numbers(void)
{
	int r;

	for (r = 48; r <= 57; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
