#include <stdio.h>

/**
 * main - Prints all possible combinations of single digits.
 *
 * Return: A value of 0.
 */
int main(void)
{
	int k = 48;

	while (k <= 57)
	{
		putchar(k);
		if (k == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		k++;
	}
	putchar('\n');
	return (0);
}

