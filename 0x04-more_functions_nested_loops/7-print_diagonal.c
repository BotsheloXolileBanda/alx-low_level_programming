#include "main.h"


/**
  * print_diagonal - Prints a diagonal line
  *
  * @n: Number of times \ will be printed
  *
  * Return: Void
  *
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			if (b == a)
			{
				_putchar(92);
			}
			else if (b < a)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
