#include <stdlib.h>
#include "main.h"

/**
 * _memset - Sets memory to a certain value.
 * @s: Pointer to memory.
 * @b: Value to fill memory with.
 * @n: The bytes to hold the value.
 *
 * Return: Pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	s = malloc(sizeof(char) * n);
	s = &b;

	return (s);
}
