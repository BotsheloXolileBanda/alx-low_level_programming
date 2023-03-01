#include "main.h"


/**
  * print_most_numbers - Prints numbers from 0 to 9 except 4
  *
  * Return: Void
  *
  */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
			a++;
		}
		_putchar(a);
	}
	_putchar('\n');
}
