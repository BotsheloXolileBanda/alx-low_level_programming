#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 * @size: The length of the array.
 * @c: The characters to fill the array.
 *
 * Return: Pointer to the newly created array or to NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *new_array;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		new_array = malloc((sizeof(char)) * size);

			if (new_array == NULL)
			{
				return (NULL);
			}
			else
			{
				for (s = 0; s < size; s++)
				{
					new_array[s] = c;
				}
			}
	return (new_array);
	}
}
