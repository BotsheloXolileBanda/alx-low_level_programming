#include "main.h"

int _strlen(const char *string);
/**
  * create_file - Creates a file with a string.
  *
  * @filename: Name of file.
  * @text_content - String to put in file.
  * Return: 1 on succes, -1 otherwise.
  */
int create_file(const char *filename, char *text_content)
{
	int fildes, wrtbts;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

		if (fildes == -1)
		{
			return (-1);
		}
		else
		{
			if (text_content == NULL)
			{
				close (fildes);
				return (1);
			}
			else
			{
				wrtbts = write(fildes, text_content, _strlen(text_content));

				if (wrtbts == -1)
				{
					close (fildes);
					return (-1);
				}
				else
				{
					close (fildes);
					return (1);
				}
			}
		}
	}
}
int _strlen(const char *string)
{
	int r = 0;

	while (*(string + r) != '\0')
	{
		r++;
	}
	return (r);
}
