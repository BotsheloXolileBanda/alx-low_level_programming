#include <stdio.h>
#include "main.h"

/**
 *  print_to_98 - Prints numbers to 98
 *
 * @n: Number to commence the count with.
 *
 * Return: No value.
 */
void print_to_98(int n)
{
	int b;

	if (n < 98)
	{
		for (b = n; b <= 98; b++)
		{
			printf("%d", b);
			if (b == 98)
				b++;
			continue;
			printf(", ");
		}
	}
	else if (b = 98)
	{
		printf("
