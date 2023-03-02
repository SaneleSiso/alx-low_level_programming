#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: stores a copy of  the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && index < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
