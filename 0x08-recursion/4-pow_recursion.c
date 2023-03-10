#include "main.h"


/**
  * _pow_recursion - Returns the value of a power of a given number
  *
  * @x: Base input
  *
  * @y: Exponent
  *
  * Return: The value of the power of a number
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
