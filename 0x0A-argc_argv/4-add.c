#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive numbers.
 *
 * @argc: Count of arguments passed.
 * @argv: Array of strings passed as arguments.
 * Return: A value of 0.
 */
int main(int argc, char **argv)
{
	int sum, r;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (r = 0; r < argc; r++)
		{
			sum += (atoi)(*(argv + r));
		}

			printf("%d\n", sum);
	}
	return (0);
}
