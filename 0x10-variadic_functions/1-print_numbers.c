#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 * @separator: Character separting numbers.
 * @n: Argument count.
 *
 * Return: No value.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list tg;
	unsigned int r;

	va_start(tg, n);
	r = 0;

	if (*separator != '\0')
	{
		while (r < n)
		{
			printf("%d", va_arg(tg, unsigned int));
			if (r != (n - 1))
			{
				printf("%c", *separator);
			}
			r++;
		}
		printf("\n");
	}
	else
	{
		while (r < n)
		{
			printf("%d", va_arg(tg, unsigned int));
			r++;
		}
		printf("\n");
	}
	va_end(tg);
}
