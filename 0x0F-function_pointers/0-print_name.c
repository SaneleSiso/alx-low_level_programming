#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the name to be printed
 * @f: pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
