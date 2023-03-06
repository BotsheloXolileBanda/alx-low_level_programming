#include "main.h"


/**
  * _memset - fill a specific memory
  *
  * @s: First address to be filled
  *
  * @b: goal value
  *
  * @n: number of bytes
  *
  * Return: Changed array
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
