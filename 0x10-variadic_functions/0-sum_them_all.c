#include "variadic_functions.h"

/**
  * sum_them_all - Adds variadic arguments.
  *
  * @n: Argument count.
  * Return: The sum or 0.
  */
int sum_them_all(unsigned int n, ...)
{
	unsigned int b;
	int sumofall;
	va_list argus;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(argus, n);
		sumofall = 0;

		for (b = 0; b < n; b++)
		{
			sumofall += va_arg(argus, int);
		}

		va_end(argus);
		return (sumofall);
	}
}
