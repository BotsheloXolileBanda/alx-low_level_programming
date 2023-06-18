#include <stdio.h>

/**
 * main - Prints alphabets in reverse.
 *
 * Return: A value of 0.
 */
int main(void)
{
	int k = 122;

	while (k >= 97)
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
