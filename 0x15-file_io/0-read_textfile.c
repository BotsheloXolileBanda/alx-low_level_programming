#include "main.h"

/**
  * read_textfile - Reads from text from file and outputs to stdout.
  *
  * @filename: The name of a file.
  * @letters: Characters to write.
  * Return: Number of characters written.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	ssize_t charsr;
	ssize_t charsw;
	char *storg;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		storg = malloc(letters + 1);
		if (!storg)
		{
			return (0);
		}
		else
		{
			fdes = open(filename, O_RDWR);
			if (fdes == -1)
			{
				return (0);
			}
			else
			{
				charsr = read(fdes, storg, letters);
				if (charsr == -1)
				{
					return (0);
				}
				else
				{
					storg[letters] = '\n';
					charsw = write(1, storg, letters);
					if (charsw == -1)
					{
						return (0);
					}
					else
					{
						free (storg);
						close(fdes);
						return (charsw);
					}
				}
			}
		}
	}
}
