#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The string to which another will be added.
 * @src: The string which will be added to another.
 * Return: Pointer to the new string.
 */
char *_strcat(char *dest, char *src)
{
	int q, t;

	for (q = 0; *(dest + q) != '\0'; q++)
	{
	}
	for (t = 0; *(src + t) != '\0'; t++)
	{
		*(dest + q++) = *(src + t);
	}
	*(dest + q) = '\0';

	return (dest);
}
