#include "main.h"

/**
  * main - Implements the cp executable/ builtin.
  *
  * @argc: Argument count.
  * @argv: Array of arguments.
  * Return: 0 for success.
  */
int main(int argc, char *argv[])
{
	int fildes, fildes1, readbts, wrtbts;
	char bufmem[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	else
	{
		fildes = open(argv[1], O_RDONLY);

		if (fildes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		else
		{
			fildes1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);

			if (fildes1 == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				return (99);
			}
			else
			{
				readbts = read(fildes, bufmem, 1024);

				if (readbts == -1)
				{
		          dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				close(fildes);
				return (98);
				}
				else
				{
					wrtbts = write(fildes1, bufmem, readbts);

					if (wrtbts == -1)
					{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(fildes1);
				return (99);
					}
					else
					{
						if (close(fildes) == -1)
						{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d", fildes);
						return (100);
						}
						if (close(fildes1) == -1)
						{
			       dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
						return (100);
						}
						return (1);
					}
				}
			}
		}
	}
}
