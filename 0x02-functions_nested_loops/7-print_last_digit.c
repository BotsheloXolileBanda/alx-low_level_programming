#include "main.h"


/**
  * print_last_digit - prints last digit of a number
  *
  * @n: inputted number
  *
  * Return: Last digit
  */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = n % 10;
	if (l < 0)
		l = -l;
	{
		_putchar(l + 48);
		return (l);
	}
}
