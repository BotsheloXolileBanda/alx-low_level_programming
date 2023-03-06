#include "main.h"

/**
  * _memcpy - Copies memory area
  *
  * @dest: Storage destination
  *
  * @src: copy destination
  *
  * @n: number of bytes
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
