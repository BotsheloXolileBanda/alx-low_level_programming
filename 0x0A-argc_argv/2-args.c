#include "main.h"

/**
  * main - Prints all it's arguments.
  *
  * @argc: The argument count.
  * @argv: The argument strings.
  * Return: 0 on success, non zero on failure.
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
