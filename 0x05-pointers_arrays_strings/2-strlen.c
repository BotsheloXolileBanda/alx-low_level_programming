#include "main.h"


/**
  * _strlen -returns length of a string
  *
  * @s: the inputted string
  *
  * Return: Lenth of string
  *
  */
int _strlen(char *s)
{
	int lengi = 0;

	while (*s != '\0')
	{
		lengi++;
		s++;
	}
	return (lengi);
}
