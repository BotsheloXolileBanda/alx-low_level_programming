#include "variadic_functions.h"

/**
  * print_strings - Prints strings.
  *
  * @separator: String in between strings.
  * @n: Argument count.
  * Return: No value.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list argums;
	char *toprint;

	va_start(argums, n);

	if (separator)
	{
		for (b = 0; b < n; b++)
		{
			toprint = va_arg(argums, char *);
			if (toprint)
			{
				if (b < (n - 1))
				{
					printf("%s%s", toprint, separator);
				}
				else
				{
					printf("%s", toprint);
				}
			}
			else
			{
				if (b < (n - 1))
				{
					printf("(nil)%s", separator);
				}
				else
				{
					printf("(nil)");
				}
			}
		}
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			toprint = (va_arg(argums, char *));

			if (toprint)
			{
				printf("%s", toprint);
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(argums);
}
