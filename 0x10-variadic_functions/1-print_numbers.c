#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Outputs numbers given to it as arguments.
 *
 * @separator: String separating numbers in output.
 * @n: The number of numbers to print.
 * Return: No value.
 */
void print_numbers(const char *separator, unsigned int n, ...)
{
	va_list argu;
	unsigned int r;

	va_start(argu, n);

	if (separator == NULL)
	{
		for (r = 0; r < n; r++)
		{
			if (r == (n - 1))
			{
				printf("%d\n", va_arg(argu, int));
			}
			else
			{
				printf("%d", va_arg(argu, int));
			}
		}
	}
	else
	{
		for (r = 0; r < n; r++)
		{
			if (r == (n - 1))
			{
				printf("%d\n", va_arg(argu, int));
			}
			else
			{
				printf("%d%s", va_arg(argu, int), separator);
			}
		}
	}
	va_end(argu);
}
