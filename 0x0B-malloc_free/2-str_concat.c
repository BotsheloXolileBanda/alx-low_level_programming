#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Takes two strings and merges them into one.
 *
 * @s1: The first and other half of the merged string.
 * @s2: The second and other half of the merged string.
 * Return: Memory pointing to the merged string.
 */
char *str_concat(char *s1, char *s2)
{
	char *newCreation;
	int r, s, t, v, x;

	while (s1 == NULL)
	{
		s1 = "";
	}
	while (s2 == NULL)
	{
		s2 = "";
	}
	r = 0;

	while (*(s1 + r) != '\0')
	{
		r++;
	}
	s = 0;

	while (*(s2 + s) != '\0')
	{
		s++;
	}
	t = s + r + 1;

	newCreation = malloc(sizeof(char) * t);

	if (newCreation == NULL)
	{
		return (NULL);
	}
	else
	{
		v = 0;

		while (v < r)
		{
			*(newCreation + v) = *(s1 + v);
			v++;
		}
		x = 0;

		while (x < s)
		{
			*(newCreation + v) = *(s2 + x);
			x++;
			v++;
		}
		*(newCreation + v) = '\0';

		return (newCreation);
	}
}
