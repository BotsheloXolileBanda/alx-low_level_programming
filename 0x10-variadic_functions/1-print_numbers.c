#include "variadic_functions.h"

/**
  * print_numbers - Prints integers with set strings.
  *
  * @separator: String to print between numbers.
  * @n: Argument count.
  * Return: No value.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;

	va_list argus;

	va_start(argus, n);

	if (separator)
	{
		for (b = 0; b < n; b++)
		{
			if (b < (n - 1))
			{
				printf("%d%s", va_arg(argus, int), separator);
			}
			else
			{
				printf("%d", va_arg(argus, int));
			}
		}
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			printf("%d", va_arg(argus, int));
		}
	}
	printf("\n");
	va_end(argums);
}
