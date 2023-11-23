#include <stdio.h>

/**
 * main - Prints count of arguments.
 *
 * @argc: The argument count.
 * @argv: The argument array.
 * Return: A value of 0.
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
