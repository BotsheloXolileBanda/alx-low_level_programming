#include "main.h"
#include <stdio.h>

/**
 * main - Prints program name.
 * @argc: Number of arguments.
 * @argv: The strings of arguments passed.
 *
 * Return: A value of 0.
 */
int main(int argc, char *argv[])
{
	_puts(argv[argc - 1]);
	return (0);
}
