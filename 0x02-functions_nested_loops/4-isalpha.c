#include "main.h"


/**
  * _isalpha - checks for whteher the character is an alphabet
  *
  * @c: character that will be put in
  *
  * Return: 1 (success) 0 (if not successful)
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
