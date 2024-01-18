#include "main.h"

/**
  * string_nconcat - merges two strings subject to n.
  *
  * @s1: First string.
  * @s2: Second string.
  * @n: Limiter byte.
  * Return: The new string or NULL.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int  s, t, x, y;

	while (s1 == NULL)
	{
		s1 = "";
	}
	while (s2 == NULL)
	{
		s2 = "";
	}
	for (s = 0; *(s1 + s) != '\0'; s++)
	{
	}
	for (t = 0; *(s2 + t) != '\0'; t++)
	{
	}
	if (n >= t)
	{
		concatenated = malloc(sizeof(char) * (s + t + 1));
		if (!concatenated)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < s; x++)
			{
				concatenated[x] = *(s1 + x);
			}
			for (y = 0; y < t; y++)
			{
				concatenated[x] = *(s2 + y);
				x++;
			}
			concatenated[x] = '\0';
			return (concatenated);
		}
	}
	else
	{
		concatenated = malloc(sizeof(char) * (s + n + 1));
		if (!concatenated)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < s; x++)
			{
				concatenated[x] = *(s1 + x);
			}
			for (y = 0; y < n; y++)
			{
				concatenated[x] = *(s2 + y);
				x++;
			}
			concatenated[x] = '\0';
			return (concatenated);
		}
	}
}
