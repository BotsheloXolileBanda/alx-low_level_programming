#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - Copies memory from one block to another.
 * @dest: Pointer to which memory will be copied.
 * @src: Pointer from which memory will be copied.
 * @n: Limiter bytes.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p;

	char *sfirst = dest;

	char *ssecond = src;

	p = 0;

		while (n != 0)
		{
			*(sfirst + p) = *(ssecond + p);
			n--;
			p++;
		}
	return (dest);
}
