#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - Prints lowercase alphabets
  *
  * Return: A value of 0.
  */
void print_alphabet(void)
{
	int l;

	for (l = 97; l <= 122; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
