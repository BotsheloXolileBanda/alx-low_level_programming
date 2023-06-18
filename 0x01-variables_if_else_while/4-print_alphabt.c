#include <stdio.h>

/**
 * main - Prints all lowercase alphabets except q and e.
 *
 * Return: A value of 0.
 */
int main(void)
{
	int p = 97;

	while (p <= 122)
	{
		if ((p == 101) || (p == 113))
		{
			p++;
			continue;
		}
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
