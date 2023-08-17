#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Computes the sum of a function's parameters.
 *
 * @n: The number of passed parameters.
 * @..: Elipsis denoting a variadic function.
 * Return: The result of the computation.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int r, k;

	va_list argu_ptr;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(argu_ptr, n);

		k = va_arg(argu_ptr, int);

		r = 0;

		while ( r < (n - 1))
		{
			k += va_arg(argu_ptr, int);
			r++;
		}
		return (k);
		va_end(argu_ptr);
	}
}
