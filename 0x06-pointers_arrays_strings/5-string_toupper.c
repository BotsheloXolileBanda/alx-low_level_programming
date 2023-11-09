#include "main.h"

/**
 * string_toupper - Transforms lower cased chars into upper.
 *
 * @d: String to compute.
 * Return: Pointer to new string.
 */
char *string_toupper(char *d)
{
	while (*d)
	{
		if (*d >= 97 && *d <= 122)
		{
			*d = *d - 32;
			d++;
			continue;
		}
		else
		{
			d++;
		}
	}
	return (d);
}

