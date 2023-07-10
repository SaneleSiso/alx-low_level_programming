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
	int i, j, k;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	j = read(i, buffer, letters);
	if (j == -1)
		return (0);
	buffer[j] = '\0';
	k = write(STDOUT_FILENO, buffer, j);
	if (k != j)
		return (0);
	free(buffer);
	close(i);
	return (j);
}
