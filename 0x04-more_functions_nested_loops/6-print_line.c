#include <stdio.h>
#include "main.h"

/**
 * print_line - Prints a straight line in the screen
 * @n: the number of times the line should be printed
 * Return: No value
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
		_putchar('\n');
	}
}
