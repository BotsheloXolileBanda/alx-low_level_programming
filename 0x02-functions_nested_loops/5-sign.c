#include "main.h"


/**
  * print_sign - Reports the sign of inputted number
  *
  * @n: inputted number
  *
  * Return: 1 (if positive) 0 (if n is 0) and -1 (if n is negative)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return ('-');
	}
}
