#include "main.h"

/**
  * free_grid - Uses the free function to release memory.
  *
  * @grid: The memory to free.
  * @height: The rows to free.
  * Return: No value.
  */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
