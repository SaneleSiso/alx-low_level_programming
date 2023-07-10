#include "main.h"
#include <stdio.h>

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int i, j, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, " Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	i = open(argv[1], O_RDONLY);
	r = read(i, buffer, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(j, buffer, r);

		if (j == -1  || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(i, buffer, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(i);
	close_file(j);

	return (0);
}

/**
  * close_file - close file descriptors.
  * @fd: The file desciptor to be closed.
  */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %di\n", fd);
		exit(100);
	}
}


/**
 * create_buffer - allocates 1024 bytes for a buffer..
 * @filename: pointer to our file our buffer is storing chars for.
 * Return: a pointer to a newly allocated buffer.
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cant write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}
