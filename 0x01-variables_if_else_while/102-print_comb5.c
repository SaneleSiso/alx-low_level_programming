#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int first, last;

	for (first = 0; first <= 98; first++)
	{
		for (last = first + 1; last <= 99; last++)
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((last / 10) + '0');
			putchar((last % 10) + '0');
			if (first == 98 && last == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
