#include <stdio.h>

/**
 * main - Prints all its arguments.
 *
 * @argc: The argument count.
 * @argv: The argument array.
 * Return: A value of 0.
 */
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
