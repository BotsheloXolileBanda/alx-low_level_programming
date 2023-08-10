#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates and computes an array of ascending ints.
 *
 * @min: The inititating value.
 * @max: The concluding value.
 * Return: Memory containing the computation in array form.
 */
int *array_range(int min, int max)
{
	int *created_arraye;
	int r, s;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		created_arraye = malloc(sizeof(int) * (max - min));

		if (created_arraye == NULL)
		{
			return (NULL);
		}
		else
		{
			r = min;

			s = 0;

			while (r <= max)
			{
				*(created_arraye + s) = r;
				r++;
				s++;
			}
			return (created_arraye);
		}
	}
}
