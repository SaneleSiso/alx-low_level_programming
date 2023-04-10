#include "main.h"

/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the letters it should read and print
 *
 * Return: the number of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
		{
			count++;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
