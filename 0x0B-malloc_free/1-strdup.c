#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates inputted string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicate string or NULL.
 */
char *_strdup(char *str)
{
	int g, f;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		g = 0;

		while (*(str + g) != '\0')
		{

			g++;
		}
		string = malloc((sizeof(char)) * (g + 1));

		if (string== NULL)
		{
			return (NULL);
		}
		else
		{
			f = 0;

			while (*(str + f) != '\0')
			{
				*(string + f) = *(str + f);
				f++;
			}
		}
	return (string);
	}
}
