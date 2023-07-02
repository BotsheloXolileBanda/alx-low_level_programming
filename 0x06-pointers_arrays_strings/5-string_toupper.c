#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: The string to be inputted.
 *
 * Return: The new string.
 */
char *string_toupper(char *s)
{
	int g;

	g = 0;

	while (*(s + g) != '\0')
	{
		if (*(s + g) >= 95 && *(s + g) <= 122)
		{
			*(s + g) -= 32;
		}
		g++;
	}
	return (s);
}
