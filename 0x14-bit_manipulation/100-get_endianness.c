#include "main.h"

/**
 * get_endianness - a function that checks endianness.
 *
 * Return: 0 if it is a big Endian, 1 if it is a little Endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);

	return (0);
}

