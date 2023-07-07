#include "main.h"

/**
 * _strlen_recursion - Returns the lenth of the string using recursion.
 * @s: The string to be checked.
 *
 * Return: No value.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ((1) + _strlen_recursion(s + 1));
	}
}
