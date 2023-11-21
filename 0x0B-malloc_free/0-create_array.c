#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and fills it with characters.
 *
 * @size: The length of the array.
 * @c: The character to fill the array.
 * Return: Pointer to new array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int r;

	char *arry;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arry = malloc(sizeof(*arry) * size);

		if (!arry)
		{
			return (NULL);
		}
		for (r = 0; r < size; r++)
		{
			arry[r] = c;
		}
		return (arry);
	}
}
