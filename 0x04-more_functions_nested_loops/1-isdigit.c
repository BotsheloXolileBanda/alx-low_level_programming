#include "main.h"


/**
  * _isdigit - checls whther input is a digit
  *
  * @c: inputted character
  *
  * Return: 1 (success) 0 (if not successful)
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
