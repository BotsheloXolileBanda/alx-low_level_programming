#include <stdio.h>

/**
 * main - Prints the count of arguments passed to the progam.
 *
 * @argc: The count of arguments passed to the program.
 * @argv: An array of strings passed to the program.
 *
 * Return: A value of 0 for success.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
