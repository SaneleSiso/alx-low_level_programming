#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - entry point
 * description - prints whether the number stored in 
 * the variable n is positive or negative.
 * return 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if(n < 0)
		printf("is negative\n");
        else if(n > 0)
		printf("is positive\n");
	else
		printf("is negative\n");
	return (0);
}
