#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the standard output
 * @filename: the name of the file
 * @letters: the  number of letters to be printed
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;
	ssize_t o, rd, wr;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if  (tmp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	rd = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (o == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(tmp);
		return (0);
	}

	free(tmp);
	close(o);

	return (wr);
}
