#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Limiter.
 *
 * Return: Pointer to new string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, o, p, q, r;
	char *new_string;

	while (s1 == NULL)
	{
		s1 = "\0";
	}
	while (s2 == NULL)
	{
		s2 = "\0";
	}
	m = 0;
	while (*(s1 + m) != '\0')
	{
		m++;
	}
	o = 0;
	while (*(s2 + o) != '\0')
	{
		o++;
	}
	if (n < o)
	{
		r = m + n + 1;
		new_string = malloc(sizeof(*new_string) * r);
		if (new_string == NULL)
		{
			return (NULL);
		}
		else
		{
			p = 0;
			while (*(s1 + p) != '\0')
			{
				*(new_string + p) = *(s1 + p);
				p++;
			}
			q = 0;
			while (q < n)
			{
				*(new_string + p) = *(s2 + q);
				q++;
				p++;
			}
			*(new_string + p) = '\0';
			return (new_string);
		}
	}
	else
	{
		r = m + o + 1;
		new_string = malloc(sizeof(*new_string) * r);
		if (new_string == NULL)
		{
			return (NULL);
		}
		else
		{
			p = 0;
			while (*(s1 + p) != '\0')
			{
				*(new_string + p) = *(s1 + p);
				p++;
			}
			q = 0;
			while (*(s2 + q) != '\0')
			{
				*(new_string + p) = *(s2 + q);
				q++;
				p++;
			}
			*(new_string + p) = '\0';
			return (new_string);
		}
	}
}
