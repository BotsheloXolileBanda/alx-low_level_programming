#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Counts and returns how long a string is.
 *
 * @s: The string with which to carry the process on.
 * Return: Value representing length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
