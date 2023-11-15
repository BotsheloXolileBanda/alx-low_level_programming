#include "main.h"

/**
 * _strlen_recursion - Implements a version of strlen using recursion.
 *
 * @s: The string to count.
 * Return: The count of chars in the string.
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
