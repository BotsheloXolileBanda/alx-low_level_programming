#include "main.h"

/**
  * create_array - Makes an array filled with characters.
  *
  * @size: The length of the array.
  * @c: The character.
  * Return: A pointer to the array.
  */
char *create_array(unsigned int size, char c)
{
	char *created_arr;
	unsigned int r;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		created_arr = malloc(sizeof(char) * size);

		if (!created_arr)
		{
			return (NULL);
		}
		else
		{
			r = 0;

			while (r < size)
			{
				created_arr[r] = c;
				r++;
			}
			return (created_arr);
		}
	}
}
