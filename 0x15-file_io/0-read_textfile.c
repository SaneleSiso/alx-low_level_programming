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
	int i;
	ssize_t j, k;
	char *tmp;

	if (!filename)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	tmp = malloc(sizeof(char) * (letters));
	if (!tmp)
		return (0);
	j = read(i, tmp, letters);
	k = write(STDOUT_FILENO, tmp, j);
	close(i);
	free(tmp);
	return (k);
}
