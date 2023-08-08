#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Creates a clone of the given string.
 *
 * @str: The string to clone.
 * Return: The new clone.
 */
char *_strdup(char *str)
{
	char *strclone;
	int r, s;

	r = 0;

	while (*(str + r) != '\0')
	{
		r++;
	}
	strclone = malloc(sizeof(char) * r);

	if (strclone == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = 0;

		while (s < r)
		{
			*(strclone + s) = *(str + s);
			s++;
		}
		*(strclone + s) = '\0';

		return (strclone);
	}
}
