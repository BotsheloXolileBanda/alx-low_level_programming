#include "main.h"


/**
  * print_alphabet_x10 - prints lowercase alphabets ten times
  *
  * n - character to print
  *
  * j - number of lines
  *
  * Return: Always 0 (success)
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i < 11; i++)
	{
	for (j = 97; j <= 122; j++)
		_putchar(j);
	_putchar('\n');
	}
}

