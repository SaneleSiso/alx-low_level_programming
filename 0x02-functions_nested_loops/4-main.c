#include "main.h"

/**
 * main - entry point
 * description - checks the code.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = _isalpha('H');
	_putchar(i + '0');
	i = _isalpha('o');
	_putchar(i + '0');
	i = _isalpha(108);
	_putchar(i + '0');
	i = _isalpha(';');
	_putchar(i + '0');
	_putchar('\n');
	return (0);
}

