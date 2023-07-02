#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: A number based on the results.
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 > *s2)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
	s1++;
	s2++;
}
