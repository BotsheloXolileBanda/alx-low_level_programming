#include "main.h"

/**
  * puts_half - prints half a string
  *
  * @str: String to be printed
  *
  * Return: Void
  *
  */
void puts_half(char *str)
{
	int x, t, lengi;

	lengi = 0;

	for (x = 0; str[x] != '\0'; x++)
		lengi++;

	t = (lengi / 2);

	if ((lengi % 2) == 1)
		t = ((lengi + 1) / 2);

	for (x = t; str[x] != '\0'; x++)
		_putchar(str[a]);
	_putchar('\n');
}
