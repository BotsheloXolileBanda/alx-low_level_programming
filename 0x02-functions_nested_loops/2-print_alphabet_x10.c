#include <stdio.h>
#include "main.h"

/**
  *  print_alphabet_x10 - Prints lowercase alphabets 10 times.
  *
  * Return:  No value.
  */
void print_alphabet_x10(void)
{
	int s, t;

	s = 1;

	while (s <= 10)
	{
		t = 97;

		while (t <= 122)
		{
			_putchar(t);
			t++;
		}
		_putchar('\n');
		s++;
	}
}
