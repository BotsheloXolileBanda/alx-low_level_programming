#include "main.h"


/**
  * _isupper - checks whether an iputted character is an uppercase alphabet
  *
  * @c: Character to be inputted
  *
  * Return: 1 (success) 0 ( not successful)
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
