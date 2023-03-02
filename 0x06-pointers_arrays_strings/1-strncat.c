#include "main.h"
/**
 * _strncpy - Concatenates two strings
 * @dest: input value to be concatenated
 * @src: input value to be concatenated
 * @n: The number of bytes from src to be appended to dest.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
