#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - Prints the program name.
 *
 * @arc: The argumet counter in integer form.
 * @argv: A pointer to a pointer storing program arguments.
 * Return: A value to the OS, either 0 or 1.
 */
int main(int argc, char *argv[])
{
	(void)(argc);
	printf("%s\n", argv[0]);
	return (0);
}
