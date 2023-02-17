#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	printf("%d ", n);
	if (n < 0)
		printf("is negative\n");
	else if (n > 0)
		printf("is positive\n");
	else
		printf("is zero\n");
	return (0);
}
