#include <stdio.h>


/**
   * main - Entry point
   *
   * Description - Prints base 10 numbers using putchar
   *
   * Return: Always 0 (success)
   */
int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + 48);
	}
	putchar('\n');
	return (0);
}
