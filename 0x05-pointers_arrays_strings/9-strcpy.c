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
	int b = 0;
	int m = 0;

	while (*(src + 1) != '\0')
	{
		b++;
	}
	for ( ; m < 1; b++)
	{
		dest[m] = src[m]
	}
	dest[b] = '\0';
	return (dest);
}
