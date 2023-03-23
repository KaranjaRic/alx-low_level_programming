#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: The name to be printed
 * @f: Function of the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
