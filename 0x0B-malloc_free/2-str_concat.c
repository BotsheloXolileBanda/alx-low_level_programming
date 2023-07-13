#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the new concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int g, f, t, x, y;
	char *new_string;

	while (s1 == NULL)
	{
		s1 = "";
	}
	while (s2 == NULL)
	{
		s2 = "";
	}
	f = 0;

	while (*(s1 + f) != '\0')
	{
		f++;
	}
	g = 0;

	while (*(s2 + g) != '\0')
	{
		g++;
	}
	t = f + g + 1;

	new_string = malloc((sizeof(char)) * t);

	if (new_string == NULL)
	{
		return (NULL);
	}
	else
	{
		x = 0;

		while (*(s1 + x) != '\0')
		{
			*(new_string + x) = *(s1 + x);
			x++;
		}
		y = 0;

		while (*(s2 + y) != '\0')
		{
			*(new_string + x) = *(s2 + y);
			x++;
			y++;
		}
		*(new_string + x) = '\0';
	}
	return (new_string);
}
