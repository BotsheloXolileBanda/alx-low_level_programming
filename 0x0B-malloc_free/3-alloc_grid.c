#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2d array filled with 0.
 *
 * @width: The number of elements of each element.
 * @height: The number of elements.
 * Return: The 2d array filled.
 */
int **alloc_grid(int width, int height)
{
	int r, p, k;
	int **grid_alloced;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		grid_alloced = malloc(sizeof(int *) * height);
		if (!grid_alloced)
		{
			return (NULL);
		}
		for (r = 0; r < height; r++)
		{
			grid_alloced[r] = malloc(sizeof(int) * width);
			if (!grid_alloced)
			{
				return (NULL);
			}
		}
		for (p = 0; p < height; p++)
		{
			for (k = 0; k < width; k++)
			{
				grid_alloced[p][k] = 0;
			}
		}
		return (grid_alloced);
	}
}
