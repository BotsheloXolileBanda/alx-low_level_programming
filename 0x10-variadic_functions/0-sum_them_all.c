#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - Computes the sum of its arguments.
  *
  * @n: The number of such arguments.
  * Return: The result of the computation.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int r;

	int k;

	va_list argus;

	va_start(argus, n);

	k = 0;

	for (r = 0; r < n; r++)
	{
		k += va_arg(argus, int);
	}
	return (k);
}
