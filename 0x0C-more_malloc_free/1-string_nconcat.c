#include "main.h"

/**
 * string_nconcat - Appends two strings to each other, subject to a limiter.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The limiter.
 * Return: Pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int r, m, p, q;
	char *newstr;

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
	for (p = 0; *(s2 + p) != '\0'; p++)
	{
		;
	}
	if (n < p)
	{
		newstr = malloc(sizeof(*newstr) * (r + n + 1));
		if (!newstr)
		{
			return (NULL);
		}
		for (m = 0; m < r; m++)
		{
			*(newstr + m) = *(s1 + m);
		}
		for (q = 0; q < n; q++)
		{
			*(newstr + m++) = *(s2 + q);
		}
		*(newstr + m) = '\0';
		return (newstr);
	}
	else
	{
		newstr = malloc(sizeof(*newstr) * (r + p + 1));
		if (!newstr)
		{
			return (NULL);
		}
		for (m = 0; m < r; m++)
		{
			*(newstr + m) = *(s1 + m);
		}
		for (q = 0; q < p; q++)
		{
			*(newstr + m++) = *(s2 + q);
		}
		*(newstr + m) = '\0';
		return (newstr);
	}
}
