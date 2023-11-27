#include <stdio.h>

/**
 * main - Uses a predefined macro to print the name of the program it was compiled from.
 *
 * Return: A value of 0 or 1.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
