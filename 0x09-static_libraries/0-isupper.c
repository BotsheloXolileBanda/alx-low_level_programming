#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase alphabet
 * @c: Alphabet to be checked.
 * Return: 1 if success and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
