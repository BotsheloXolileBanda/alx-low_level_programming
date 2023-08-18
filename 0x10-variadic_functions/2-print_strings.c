#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - Outputs strings in a certain manner.
  *
  * @separator: The in between string.
  * @n: The number of strings to expect.
  * @...: Denotion of varag.
  * Retun: No value.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu_ptrrr;
	unsigned int r;

	if (separator == NULL)
	{
		va_start(argu_ptrrr, n);

		r = 0;

		while (r < n)
		{
			if ((va_arg(argu_ptrrr, char *)) == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(argu_ptrrr, char *));
			}
			r++;
		}
		printf("\n");
	}
	else
	{
		va_start(argu_ptrrr, n);

		r = 0;

		while (r < n)
		{
			if ((va_arg(argu_ptrrr, char *)) == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(argu_ptrrr, char *));
				if (r < (n - 1))
				{
					printf("%s", separator);
				}
			}
			r++;
		}
		printf("\n");
	}
}
