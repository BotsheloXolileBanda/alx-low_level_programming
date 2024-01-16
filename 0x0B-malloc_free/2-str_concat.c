#include "main.h"

/**
  * str_concat - Bonds two strings together.
  *
  * @s1: The first string.
  * @s2: The second string.
  * Return: A pointer the new string or NULL.
  */
char *str_concat(char *s1, char *s2)
{
	int m, n, x, y;
	char *fresh_str;

	while (s1 == NULL)
	{
		s1 = "";
	}
	while (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; *(s1 + x) != '\0'; x++)
	{
	}
	for (y = 0; *(s2 + y) != '\0'; y++)
	{
	}
	fresh_str = malloc(sizeof(char) * (x + y + 1));
	if (!fresh_str)
	{
		return (NULL);
	}
	else
	{
		for (m = 0; m < x; m++)
		{
			*(fresh_str + m) = *(s1 + m);
		}
		for (n = 0; n < y; n++)
		{
			*(fresh_str + m) = *(s2 + n);
			m++;
		}
		*(fresh_str + m) = '\0';
		return (fresh_str);
	}
}
