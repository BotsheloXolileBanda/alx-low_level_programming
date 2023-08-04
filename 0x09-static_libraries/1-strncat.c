#include "main.h"

/**
 * _strncat - Concatenates two strings subject to n.
 * @dest: First string.
 * @src: Second string.
 * @n: Bytes to limit concatenation.
 *
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, p, t;

	m = 0;

	while (*(dest + m) != '\0')
		m++;

	p = 0;

	while (*(src + p) != '\0')
		p++;

	t = 0;

	if (n < p)
	{
		while (t < n)
		{
			*(dest + m) = *(src + t);
			m++;
			t++;
		}
	}
	else
	{
		while (t < p)
		{
			*(dest + m) = *(src + t);
			m++;
			t++;
		}
	}
	return (dest);
}
