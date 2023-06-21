#include <stdio.h>
#include "main.h"

/**
  * _isalpha - checks for alphabet
  *
  * @c: Charatcer to be checked.
  *
  * Return: A value of 1 if successful and 0 otherwise.
  */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
