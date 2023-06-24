#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle shape.
 * @size: The maginitude of the triangle.
 * Return: No value.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, p;

		for (k = 1; k <= size; k++)
		{
			for (p = 1; p <= size; p++)
			{
				if (p <= size - k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
