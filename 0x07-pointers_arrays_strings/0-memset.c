#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed
 * to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @b: constant byte
 * @n:number of bytes to be filled
 * Return: returns new value of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
