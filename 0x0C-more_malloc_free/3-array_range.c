#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from minimum to maximum values.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the array, or NULL.
 */
int *array_range(int min, int max)
{
	int x, y, r;
	int *arrayofints;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		x = (max - min) + 1;

		arrayofints = malloc(sizeof(int) * x);

		if (arrayofints == NULL)
		{
			return (NULL);
		}
		else
		{
			y = min;

			r = 0;

			while (y <= max)
			{
				*(arrayofints + r) = y;
				y++;
				r++;
			}
		}
		return (arrayofints);
	}
}
