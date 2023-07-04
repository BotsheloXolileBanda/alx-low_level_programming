#include "main.h"
#include <stddef.h>

/**
 * _strchr - Searches for a character in a string.
 * @s: The string to be searched.
 * @c: The character to be searched.
 *
 * Return: Pointer to first occurence of string.
 */
char *_strchr(char *s, char c)
{
	int r;
	char *stor;

	r = 0;

	if (*s != '\0')
	{
		return (NULL);
	}

	else if (*s != c)
	{
		return (NULL);
	}
	else
	{
		while (*(s + r) == c)
		{
			stor = s;
			*(stor + r) = *(s + r);
			r++;
		}
		return (stor);
	}
}

