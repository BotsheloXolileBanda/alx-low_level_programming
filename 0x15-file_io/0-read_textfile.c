#include "main.h"

/**
  * read_textfile - Reads text from file and prints it.
  *
  * @filename: The file to read from.
  * @letters: The number of letters to read.
  * Return: The letters read or -1 on error.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wrote_val, read_val;
	int fildes;
	char *savein_mem;

	if (!filename)
	{
		return (0);
	}
	else
	{
		savein_mem = malloc(sizeof(char) * (letters + 1));

		if (!savein_mem)
		{
			return (0);
		}
		else
		{
			fildes = open(filename, O_RDWR);

			if (fildes < 0)
			{
				return (0);
			}
			else
			{
				read_val = read(fildes, savein_mem, letters);

				if (read_val <= 0)
				{
					return (0);
				}
				else
				{
					savein_mem[letters] = '\0';

					wrote_val = write(STDOUT_FILENO, savein_mem, letters);

					if (wrote_val <=  0)
					{
						return (0);
					}
					else
					{
						return (read_val);
					}
				}
			}
		}
	}
	free(savein_mem);
	close(fildes);
}
