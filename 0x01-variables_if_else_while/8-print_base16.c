#include <stdio.h>

/**
 * main - Prints base16 numbers
 *
 * Return: A value of 0.
 */
int main(void)
{
	int b = 48;
	int r = 97;

	while (b <= 57)
	{
		putchar(b);
		b++;
	}
	while (r <= 102)
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
