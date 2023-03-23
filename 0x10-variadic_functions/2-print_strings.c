#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: Number of strings passed to the function
 * Return: No return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;
	char *str;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);

		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
