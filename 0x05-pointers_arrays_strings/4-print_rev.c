#include "main.h"


/**
  * print_rev - prints a string in reverse
  *
  * @s: string to be reversed
  *
  * Return: Void
  */
void print_rev(char *s)
{
	int lengi = 0;
	int b;

	while (*s != '\0')
	{
		lengi++;
		s++;
	}
	s--;
	for (b = lengi; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
