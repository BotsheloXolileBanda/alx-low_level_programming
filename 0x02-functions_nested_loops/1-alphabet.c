#include "main.h"

/**
  * print_alphabet - prints lowercase alphabets to stdout
  *
  * n - characters to print
  *
  * Return 0: Always (success)
  */
void print_alphabet(void)
{
	int n;

	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
