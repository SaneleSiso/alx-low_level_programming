#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'a'; x <= 'z'; x++)
		putchar(toupper(x));
	putchar('\n');
	return (0);
}
