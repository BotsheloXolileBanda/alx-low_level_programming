#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Adds all the parameters of a function and returns the sum.
 * @n: Argument count.
 *
 * Return: The sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int r;
	int sumofall;
	va_list rj;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(rj, n);
		r = 0;
		sumofall = 0;

		while (r < n)
		{
			sumofall += va_arg(rj, unsigned int);
			r++;
		}
		va_end(rj);
		return (sumofall);
	}
}
