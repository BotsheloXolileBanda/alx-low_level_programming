#include <stdio.h>

/**
 *  main - Prints letters of the alphabet in lowercase.
 *
 *  Return: A value of 0.
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
