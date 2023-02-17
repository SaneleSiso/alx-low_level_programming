#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	while (x <= 'z' && x != 'e' && x != 'q')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
