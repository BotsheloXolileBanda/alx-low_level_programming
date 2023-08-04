#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 *
 * @argc: The argument counter in integer type form.
 * @argv: A pointer to a pointer of arguemnts passed to main.
 * Return: A value to the OS, either 0 or 1.
 */
int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
