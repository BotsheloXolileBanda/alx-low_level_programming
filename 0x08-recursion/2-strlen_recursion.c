#include "main.h"

/**
 * _strlen_recursion - Returns the lenth of the string using recursion.
 * @s: The string to be checked.
 *
 * Return: No value.
 */
int _strlen_recursion(char *s)
{
	int u;

	u = 0;

	if (*(s + u) == '\0')
	{
		return (0);
	}
	else
	{
		while (*(s + u))
		{
			u++;
		}
		_strlen_recursion(s + 1);
		return (u);
	}
}
