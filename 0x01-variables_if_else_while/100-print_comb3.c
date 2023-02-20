#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int first, last;

	for (first = '0'; first < '9'; first++)
	{
		for (last = first+ 1; last <= '9'; last++)
		{
			if (first != last)
			{
				putchar((first);
				putchar(last);
				if (first == '8' && last == '9')
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
