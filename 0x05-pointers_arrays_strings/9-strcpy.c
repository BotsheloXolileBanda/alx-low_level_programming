#include "main.h"

/**
  * _strcpy - prints a string to a pointer
  *
  * @src: pointer to a string
  *
  * @dest: pointer to a buffer
  *
  * Return: Pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x]
	}
	dest[x] = '\0';
	return (dest);
}
