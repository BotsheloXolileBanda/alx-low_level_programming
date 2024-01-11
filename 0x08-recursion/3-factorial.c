#include "main.h"

/**
 * factorial - Computes the factorial of a number.
 *
 * @n: THe number to compute.
 * Return: The result or -1.
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
