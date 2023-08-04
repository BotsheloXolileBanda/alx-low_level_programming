#include <stdio.h>
#include "main.h"

/**
 * _abs - Prints the absolute value of a number.
 *
 * @t: Number to be checked.
 *
 * Return: The asolute value of a number.
 */
int _abs(int t)
{
	if (t <= 0)
	{
		return (t * -1);
	}
	else
	{
		return (t);
	}
}
