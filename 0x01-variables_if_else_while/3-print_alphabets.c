#include <stdio.h>

/**
 *  main - Prints lower and uppercase alphabets.
 *
 *  Return: A value of 0.
 */
int main(void)
{
	int m = 97;
	int n = 65;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
