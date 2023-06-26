#include "main.h"

/**
 * _strlen - Determines the enth of a string.
 * @s: The string to be checked.
 *
 * Return: The lenth of the string in integer form.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s+i) != '\0')
	{
		i++;
	}
	return (i);
}
