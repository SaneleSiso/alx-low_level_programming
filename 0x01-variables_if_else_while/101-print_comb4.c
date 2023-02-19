#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main()
{
	int digit[4];
	int i, j, k;
	
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				digit[0] = i + '0';
				digit[1] = j + '0';
				digit[2] = k + '0';
				digit[3] = '\0';
				putchar(digit);
			}
		}
	}
	return 0;
}
