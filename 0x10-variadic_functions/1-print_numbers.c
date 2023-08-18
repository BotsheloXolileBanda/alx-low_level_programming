#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Outputs numbers with a string in between them.
 *
 * @separator: The aforementioned string.
 * @n: The count of inputted numbers.
 * Return: No value.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list argu_ptrr;

	if (separator == NULL)
	{
		va_start(argu_ptrr, n);

		r = 0;

		while (r < n)
		{
			printf("%d", va_arg(argu_ptrr, int));
			r++;
		}
		printf("\n");
		va_end(argu_ptrr);
	}
	else
	{
		va_start(argu_ptrr, n);

		r = 0;

		while (r < n)
		{
			printf("%d", va_arg(argu_ptrr, int));
			if (r < (n - 1))
			{
				printf("%s", separator);
			}
			r++;
		}
		printf("\n");
		va_end(argu_ptrr);
	}
}
