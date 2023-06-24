#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: the width and height of the square
 * Return: no value
 */
void print_square(int size)
{
	int l, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
	{
		for (p = 1; p <= size; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
