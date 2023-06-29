#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to first string.
 * @src: Pointer to second string.
 *
 * Return: A pointer to the new string.
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;

	while (*(dest + m) != '\0')
		m++;
	n = 0;

	while (*(src + n) != '\0')
	{
		*(dest + m) = *(src + n);
		n++;
		m++;
	}
	*(dest + m) = '\0';

	return (dest);
}
