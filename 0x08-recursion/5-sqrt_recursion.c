#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number whose square root will be calculated
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
