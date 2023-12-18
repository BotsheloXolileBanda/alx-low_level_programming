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
	size_t r;
	char *storg;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		storg = malloc(letters);
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
					storg[charsr] = '\0';
					for (r = 0; *(storg + r) != '\0'; r++)
					{
					}
					charsw = write(1, storg, r);
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
