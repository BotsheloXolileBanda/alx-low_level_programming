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
		_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
	return (-1);
	}
	else
	{
		_putchar(48);
	return (0);
	}
}
