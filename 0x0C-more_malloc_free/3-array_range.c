#include "main.h"

/**
  * array_range - Creates an int array.
  *
  * @min: Start of array.
  * @max: End of array.
  * Return: Pointer to array or NULL.
  */
int *array_range(int min, int max)
{
	int *array;
	int r, x;

	if (max < min)
	{
		return (NULL);
	}
	else
	{
		array = malloc(sizeof(*array) * ((max - min) + 1));
		if (!array)
		{
			return (NULL);
		}
		else
		{
			x = 0;
			for (r = min; r <= max; r++)
			{
				array[x] = r;
				x++;
			}
			return (array);
		}
	}
}
