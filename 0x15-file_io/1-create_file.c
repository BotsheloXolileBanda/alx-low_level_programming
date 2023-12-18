#include "main.h"

/**
  * create_file - Creates a file and writes a string to it.
  *
  * @filename: Name of the file.
  * @text_content: String to write.
  * Return: 1 on success, -1 otherwise.
  */
int create_file(const char *filename, char *text_content)
{
	int fdes;
	ssize_t readed;
	size_t r;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fdes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fdes == -1)
		{
			return (-1);
		}
		else
		{
			for (r = 0; *(text_content + r) != '\0'; r++)
			{
			}
			readed = write(fdes, text_content, r);
			if (readed == -1)
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
	}
}
