#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @Separator: The separating strings.
 * @n: Argument count.
 *
 * Return: No value.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list jg;
	unsigned int rl;

	va_start(jg, n);
	rl = 0;

	while (r < n)
	{
		printf("%s", va_arg(jg, char *));
		if (rl != (n - 1))
		{
			printf("%s", *separator);
		}
		rl++;
	}
	printf("\n");
	va_end(jg);
}
