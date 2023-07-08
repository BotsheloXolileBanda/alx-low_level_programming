#include <stdio.h>

/**
 * main - Prints all arguments passed to the program.
 *
 * @argc: Variable containing count of arguments passed to the program.
 * @argv: Array of strings passed as arguments to the program.
 *
 * Return: A value of 0 for success.
 */
int main(int argc, char *argv[])
{
	int m;

	m = 0;

	while (m < argc)
	{
		printf("%s\n", argv[m]);
		m++;
	}
	return (0);
}
