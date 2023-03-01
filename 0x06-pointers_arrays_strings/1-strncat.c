#include "main.h"
/**
 * _strncpy - Concatenates two strings
 * @dest: input value to be concatenated
 * @src: input value to be concatenated
 * @n: The number of bytes from src to be appended to dest.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
