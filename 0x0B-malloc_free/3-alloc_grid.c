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
	int s;

	if ((width == 0) || (height == 0))
	{
		return (NULL);
	}
	else
	{
		q = (int **)malloc(sizeof(int *) * height);

	s = 0;

	while (s < height)
	{
		q[s] = (int *)malloc(sizeof(int) * width);
		s++;
	}
	return (q);
	}
}
