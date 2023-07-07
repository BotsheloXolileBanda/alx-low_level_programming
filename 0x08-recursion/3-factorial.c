#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to give factorial of.
 *
 * Return: The factorial in integer type.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
