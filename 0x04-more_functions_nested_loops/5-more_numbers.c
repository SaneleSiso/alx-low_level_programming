#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 * Return - the numbers
 */
void more_numbers(void)
{
	int i, counter;

	for (i = 0; i <= 9; i++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			if (counter > 9)
				_putchar((counter / 10) + '0');
			_putchar((counter % 10) + '0');
		}
		_putchar('\n');
	}
}
