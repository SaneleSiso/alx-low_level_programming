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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
