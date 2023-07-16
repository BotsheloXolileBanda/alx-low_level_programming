#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Creates a 2D array.
 * @width: The number of columns.
 * @height: The number of rows.
 *
 * Return: Pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int **q;
	int s, p, r;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	else
	{
		q = (int **)malloc(sizeof(int *) * height);

		if (q == NULL)
		{
			return (NULL);
		}
		else
		{
			s = 0;

			while (s < height)
			{
				q[s] = (int *)malloc(sizeof(int) * width);
				
				if (q[s] == NULL)
				{
					return (NULL);
				}
				else
				{
					s++;
				}
			}
			p = 0;

			while (p < height)
			{
				r = 0;

				while (r < width)
				{
					q[p][r] = 0;
					r++;
				}
				p++;
			}
		}
		return (q);
	}
}
