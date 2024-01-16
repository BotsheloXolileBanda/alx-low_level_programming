#include "main.h"

/**
  * alloc_grid - Creates a 2d array of 0s.
  *
  * @width: The number of elements of each block.
  * @height: The number of blocks.
  * Return: A pointer to the array.
  */
int **alloc_grid(int width, int height)
{
	int **alloced;
	int x, y;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	else
	{
		alloced = malloc(sizeof(int *) * height);
		if (!alloced)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < height; x++)
			{
				alloced[x] = malloc(sizeof(int) * width);
				if (!alloced[x])
				{
					return (NULL);
				}
				else
				{
					for (y = 0; y < width; y++)
					{
						alloced[x][y] = 0;
					}
				}
			}
			return (alloced);
		}
	}
}
