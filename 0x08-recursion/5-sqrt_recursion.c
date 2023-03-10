#include "main.h"

/**
  * _sqrt_recursion - Finds a natural square root of a number
  *
  * @n: Input number
  *
  * Return: Natural square root or -1
  */
int _sqrt_recursion(int n)
{
	int temp, sqrt;

	sqrt = n / 2;
	temp = 0;

	if (sqrt == temp)
	{
		return (-1);
	}
	else
	{
		return (temp = sqrt);
		return (sqrt = (n / temp + temp) / 2);
	}
}

