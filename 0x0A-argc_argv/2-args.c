#include <stdio.h>

/**
 * main - Prints all the arguments it receives.
 *
 * @argc: Argument counter in integer type form.
 * @argv: A pointer to pointers holding arguemnts.
 * Return: A value to the OS on exit status, either 0 or 1.
 */
int main(int argc, char *argv[])
{
	int r;

	r = 0;

	while (r < argc)
	{
		printf("%s\n", argv[r]);
		r++;
	}
	return (0);
}
