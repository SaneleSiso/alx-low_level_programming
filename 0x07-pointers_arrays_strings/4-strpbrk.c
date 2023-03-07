#include "main.h"

/**
 * _strpbrk - The _strpbrk() function locates the first
 * occurrence in the string s of any of the bytes in
 * the string accept
 * @s: string
 * @accept: The set of bytes to be searched for.
 * Return:Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
har *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
