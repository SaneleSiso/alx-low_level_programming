#include "main.h"

/**
 * _memcpy -  copies memory area from src to dest
 * @dest: destination of the copied memory
 * @src: source to be copied from
 * @n:number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i;

	 for (i = 0; i < n ; i++)
		dest[i] = src[i];
	 return (dest);
}
