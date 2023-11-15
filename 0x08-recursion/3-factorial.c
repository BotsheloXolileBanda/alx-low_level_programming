#include "main.h"

/**
 * factorial - Computes the factorial of a number using recursion.
 *
 * @n: The number.
 * Return: The result of the computation in int form.
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
		return (n * factorial(n - (0 + 1)));
	}
}
