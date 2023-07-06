#include "main.h"

/**
 * binary_to_uint - A function that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 *
 * Return:the new unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, new = 0, count = 0;

	if (b == NULL)
		return (0);

	while (b[count])
	count++;

	while (count)
	{
		if (b[count - 1] != '0' && b[count - 1] != '1')
			return (0);

		if (b[count - 1] == '1')
			new += base;
		base *= 2;
		count--;
	}
	return (new);
}
