#include "main.h"

/**
 * append_text_to_file - a funtion that appends text at the end of a file
 * @filename: thename of the file.
 * @text_content: the added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j;
	int rwr;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (j = 0; text_content[j]; j++)
			;
		rwr = write(i, text_content, j);
		if (rwr == -1)
			return (-1);
	}

	close(i);

	return (1);
}
