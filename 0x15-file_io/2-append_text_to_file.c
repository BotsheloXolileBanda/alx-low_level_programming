#include "main.h"

/**
  * append_text_to_file - Adds text to a fie.
  * @filename: Name of file to add to.
  * @text_content - The text to add.
  *
  * Return: 1 on success and -1 otherwise.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	size_t r;
	ssize_t charsw;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		if (text_content == NULL)
		{
			return (1);
		}
		else
		{
			fdes = open(filename, O_WRONLY | O_APPEND);
			if (fdes == -1)
			{
				return (-1);
			}
			for(r = 0; *(text_content + r) != '\0'; r++)
			{
			}
			charsw = write(fdes, text_content, r);
			if (charsw == -1)
			{
				close(fdes);
				return (-1);
			}
			else
			{
				close(fdes);
				return (1);
			}
		}
	}
}
