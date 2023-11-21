#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc.
 *
 * @str: The string to duplicate.
 * Return: Pointer to new string.
 */
char *_strdup(char *str)
{
	int r, x;
	char *newst;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (r = 0; *(str + r) != '\0'; r++)
		{
			;
		}
		newst = malloc(sizeof(*newst) * (r + 1));

		if (!newst)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < r; x++)
			{
				*(newst + x) = *(str + x);
			}
			*(newst + x) = '\0';
			return (newst);
		}
	}
}
