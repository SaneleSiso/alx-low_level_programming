#include <stdio.h>

/**
 * mystartupfunction - a function that will run before the main function is executed
 *
 * Return: void
 */

void __attribute__ ((constructor)) mystartupfunction(void)
{
	/* Apply the constructor attribute to myStartupFun() so that it */
	/*  is executed before main() */

	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
