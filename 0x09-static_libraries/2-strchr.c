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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
