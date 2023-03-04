#include "main.h"


/**
  * puts2 - prints every other character of a string
  *
  * @str: string to be inputted
  *
  * Return: Void
  */
void puts2(char *str)
{
	int lengi = 0;
	int b = 0;
	char *x = str;
	int m;

	while (*x != '\0')
	{
		x++;
		lengi++;
	}
	b = lengi - 1;

	for (m = 0; m <= b; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}

