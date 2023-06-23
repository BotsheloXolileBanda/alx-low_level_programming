#include <main.h>
#include "main.h"

/**
 * print_most_numbers- Prints most numbers
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int r;

	for (r = 48; r <= 57; r++)
	{
		if (r == 50 || r == 52)
		{
			r++;
			continue;
		}
		_putchar(r);
	}
	_putchar('\n');
}
