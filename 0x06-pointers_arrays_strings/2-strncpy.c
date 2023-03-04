#include "main.h"

/**
  * _strncpy - Copies a string
  *
  * @dest: pointer to string
  *
  * @src: pointer to a string
  *
  * @n: Pointerr
  *
  * Return: copy of string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\n';
		b++;
	}
	return (dest);
}
