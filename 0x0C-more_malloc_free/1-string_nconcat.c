#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Merges string two to string one subject to n.
 *
 * @s1: The first string to use.
 * @s2: The second string to use.
 * @n: The limiting factor.
 * Return: A memory containing the merged string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int r, s, t, v, a, b;
	char *new_creation;
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
	if (n < s)
	{
		new_creation = malloc(sizeof(char) * (r + n + 1));
		if (new_creation == NULL)
		{
			return (NULL);
		}
		else
		{
			t = 0;

			while (t < r)
			{
				*(new_creation + t) = *(s1 + t);
				t++;
			}
			v = 0;

			while (v < n)
			{
				*(new_creation + t) = *(s2 + v);
				v++;
				t++;
			}
			*(new_creation + t) = '\0';

			return (new_creation);
		}
	}
	else
	{
		new_creation = malloc(sizeof(char) * (r + s + 1));

		if (new_creation == NULL)
		{
			return (NULL);
		}
		else
		{
			a = 0;

			while (a < r)
			{
				*(new_creation + a) = *(s1 + a);
				a++;
			}
			b = 0;

			while (b < s)
			{
				*(new_creation + a) = *(s2 + b);
				a++;
				b++;
			}
			*(new_creation + a) = '\0';

			return (new_creation);
		}
	}
}
