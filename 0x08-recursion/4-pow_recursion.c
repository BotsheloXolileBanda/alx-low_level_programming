#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Computes and returns the power of x to ex y.
 *
 * @x: Our number representing base.
 * @y: Our number representing the power.
 * Return: The result of the computation.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
