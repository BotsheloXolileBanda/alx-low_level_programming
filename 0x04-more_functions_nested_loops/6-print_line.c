#include "main.h"


/**
  * print_line - Prints straight lines
  *
  * @n: number after which number of lines will be shown
  *
  * Return: Void
  *
  */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
