#include <stdio.h>

/**
 * main - Prints the name of the progam using a predefined Macro.
 *
 * Return: 0 to tell the CLI the progam was a success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
