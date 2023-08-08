#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates and also initialises an array of characters.
 *
 * @size: The length or byte count of the array.
 * @c: The variable to fill the array.
 * Return: A pointer to the new and fresh string.
 */
char *create_array(unsigned int size, char c)
{
	char *array_created;
	unsigned int r;

	array_created = malloc(sizeof(char) * size);

	if (array_created == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		r = 0;

		while (r < size)
		{
			array_created[r] = c;
			r++;
		}
		return (array_created);
	}
}
