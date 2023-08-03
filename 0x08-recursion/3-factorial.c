#include <stdio.h>
#include "main.h"

/**
 * factorial - Computes and returns the factorial of a given number.
 *
 * @n: The number to process.
 * Return: The computed answer in integer form.
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
		return (n * (factorial(n - 1)));
	}
}
