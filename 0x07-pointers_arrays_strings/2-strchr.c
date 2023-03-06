#include <stdio.h>
#include "main.h"

/**
  * _strchr - Checks for strings
  *
  * @s: input
  *
  * @c: input
  *
  * Return: Always 0 (success)
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] <= '\n'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
