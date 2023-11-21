#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2d array.
 *
 * @grid: The array.
 * @height: The number of elements.
 * Return: No value.
 */
void free_grid(int **grid, int height)
{
	int r = 0;

	while (r < height)
	{
		free(grid[r]);
		r++;
	}
	free(grid);
}
