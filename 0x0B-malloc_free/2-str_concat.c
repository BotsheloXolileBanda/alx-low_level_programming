#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Attches two strings to each other.
 *
 * @s1: The first string.
 * @s2: The second string.
 * Return: Pointer to attached strings or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *newst;
	int r, x, t, k;

	while (s1 == NULL)
	{
		s1 = "";
	}
	while (s2 == NULL)
	{
		s2 = "";
	}
	for (r = 0; *(s1 + r) != '\0'; r++)
	{
		;
	}
	for (x = 0; *(s2 + x) != '\0'; x++)
	{
		;
	}
	newst = malloc(sizeof(*newst) * (r + x + 1));

	if (!newst)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < r; k++)
		{
			*(newst + k) = *(s1 + k);
		}
		for (t = 0; t < x; t++)
		{
			*(newst + k++) = *(s2 + t);
		}
		*(newst + k) = '\0';
		return (newst);
	}
}
