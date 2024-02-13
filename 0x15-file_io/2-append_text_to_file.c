#include "main.h"

int _strlen(const char *string);
/**
  * append_text_to_file - Adds text to end of file.
  *
  * @filename: The file to open.
  * @text_content: Text to add.
  * Return: ! on success, -1 on error.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, wrtval;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fildes = open(filename, O_WRONLY | O_APPEND);

		if (fildes == -1)
		{
			return (-1);
		}
		else
		{
			if (text_content == NULL)
			{
				close(fildes);
				return (1);
			}
			else
			{
				wrtval = write(fildes, text_content, _strlen(text_content));

				if (wrtval == -1)
				{
					close(fildes);
					return (-1);
				}
				else
				{
					close(fildes);
					return (1);
				}
			}
		}
	}
}
/**
  * _strlen - Computes string lenth.
  *
  * @string: The string.
  * Return: Result
  */
int _strlen(const char *string)
{
	int r = 0;

	while (*(string + r) != '\0')
	{
		r++;
	}
	return (r);
}
