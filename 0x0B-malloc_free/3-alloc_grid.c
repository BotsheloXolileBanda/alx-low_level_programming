#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Creates and returns a multidiment int array with 0s in it.
 *
 * @width: The columns of the array.
 * @height: The vertical length of the array.
 * Return: The array as intitalised in the above manner.
 */
int **alloc_grid(int width, int height)
{
	int **horizverti;
	int r, x, v;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		horizverti = malloc(sizeof(int *) * height);

		if (horizverti == NULL)
		{
			return (NULL);
		}
		else
		{
			r = 0;

			while (r < height)
			{
				horizverti[r] = malloc(sizeof(int) * width);

				if (horizverti[r] == NULL)
				{
					return (NULL);
				}
				r++;
			}
			x = 0;

			while (x < height)
			{
				v = 0;

				while (v < width)
				{
					horizverti[x][v] = 0;
					v++;
				}
				x++;
			}
			return (horizverti);
		}
	}
}
